/**
 * @file increasinArr.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution for Increasing array problem of CSES problem set https://cses.fi/problemset/task/1094
 * @version 0.1
 * @date 2020-06-19
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n;
    int zero = 0;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i<n ; i ++)
        cin>>arr[i];
    int moves = 0;
    for(int i = 0 ; i< n -1 ; i++){
        int diff=arr[i] - arr[i+1];
        diff=max(zero,diff);
        arr[i+1]+=diff;
        moves+=diff;
     }
     cout<<moves;
    return 0;
}