/**
 * @file bstrings_new.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the working implementation for CSES Bit Strings https://cses.fi/problemset/task/1617/
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <bits/stdc++.h>
#define ll long long int
const ll mod = 1e9 + 7;
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll res = 1LL , two = 2LL;
    while(n){
        if(n & 1){
            res = (res * two) % mod;
        }
        n>>=1;
        two=(two*two) % mod;
    }
    cout<<res<<"\n";
    return 0;
}