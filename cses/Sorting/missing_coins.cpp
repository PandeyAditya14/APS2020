/**
 * 
 * CSES Q: https://cses.fi/problemset/task/2216
 * CSES Title :Collecting Numbers
 * Explation: We have to: Sort 
 *                      : run an O(n) loop that is intiated at res = 1 
 *                      : runs for an iteration 
 *                      :   res+=arr[i]
 *                      : We break the loop when res>arr[i] 
 * LINK: https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/ 
 * 
**/
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i = 0 ; i<n ; i++)cin>>arr[i];

    sort(arr , arr+n);

    long long int ans = 1 ;
    for(int i = 0 ; i <n && arr[i] <= ans; i++) ans+=arr[i];

    cout<<ans;

}