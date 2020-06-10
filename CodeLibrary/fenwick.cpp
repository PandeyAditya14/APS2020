#include <bits/stdc++.h>

using namespace std;

int BITree[100];
int getSum(int index){
    int sum = 0;
    // index += 1;
    while (index > 0 ){
        sum += BITree[index];
        index -=(index & -index);
        // cout<<sum;
    }
    return sum;
}

void updateBIT(int n, int index, int val) 
{ 
    // index in BITree[] is 1 more than the index in arr[] 
    index = index + 1; 
  
    // Traverse all ancestors and add 'val' 
    while (index <= n) 
    { 
    // Add 'val' to current node of BI Tree 
    BITree[index] += val; 
  
    // Update index to that of parent in update View 
    index += index & (-index); 
    } 
} 

void constructBITree(int arr[], int n){
    for (int i = 0;i<n  ;i++){
        updateBIT(n,i,arr[i]);
    }
}

int main(){
    int arr[] = {2, 1 , 3, 4, 1 , 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(int);
    constructBITree(arr,size);
    cout<<"THE SUM FOR [0..6] is "<<getSum(6)<<"\n";
    updateBIT(size,5,1);// Adds to exsisting number on the given index
    cout<<"THE SUM FOR [0..6] is After update "<<getSum(6)<<"\n";
    return 0;


}