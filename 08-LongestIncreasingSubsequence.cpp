/**
 * @ Author: Aditya Kumar Pandey
 * @ Create Time: 2020-03-28 18:39:23
 * @ Description:This is code is intended to find the longest increasing subsequencec using dp in O(n^2)
 * @ Link:https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/?ref=lbp
 */

#include<bits/stdc++.h>
using namespace std;

int Lis(int a[] , int n){
    int *lis = new int[n];
    lis[0]=1;
    for(int i = 1 ; i < n ;i++){
        lis[i]=1;
        for (int j = 0; j<i ; j++)
            if (a[i]>a[j])
                lis[i] = max(lis[i],1+lis[j]);
    }
    
    // for (int i = 0; i<n ;i++) cout<<lis[i]<<"\t";
    return *max_element(lis,lis+n);
}
int main(){
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };  
    int n = sizeof(arr)/sizeof(arr[0]);  
    printf("\nLength of lis is %d\n", Lis( arr, n ) );  
    return 0;
}