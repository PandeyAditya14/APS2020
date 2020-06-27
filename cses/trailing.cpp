/**
 * @file trailing.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution for CSES trailing https://cses.fi/problemset/task/1618
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll mx_pw = log(n) / log(5);
    ll cnt = 0;
    for (int i =1 ; i<=mx_pw ; i++){
        cnt+=(n/pow(5,i));
    }
    cout<<cnt;
}