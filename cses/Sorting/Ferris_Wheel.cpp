#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , x ;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int left = 0 , right = n-1 , count = 0;
    while(left<= right){
        if(arr[left]+arr[right] > x){
            right--;
            count++;
        }
        else{
            left++;
            right--;
            count++;
        }
    }
    cout<<count<<"\n";
}