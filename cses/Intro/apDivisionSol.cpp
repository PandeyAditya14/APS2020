/**
 * @file apDivisionSol.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is solution for Apple Division which uses all combination of numbers in set arrives at the solution
 * @version 0.1
 * @date 2020-06-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
#define ll long long int
#define li long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll total=0 , diff = INT_MAX;
    cin>>n;
    li arr[n];
    for (int i = 0; i<n ;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    for (li i = 0 ;i<(1<<n);i++){
        ll s = 0;
        for (int j = 0; j<n ;j++) if(i&1<<j) s+=arr[j];
        diff=min(diff,abs(total - 2*s));
    }
    cout<<diff;
    return 0;
}