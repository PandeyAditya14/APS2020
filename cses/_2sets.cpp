/**
 * @file _2sets.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution of for https://cses.fi/problemset/task/1092
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll sum_n = (n*(n+1))/2LL ;
    if (sum_n % 2LL == 0){
        ll sum_half= sum_n/2LL;
        cout<<"YES\n";
        vector<ll> set1 , set2 ;
        while(n){
            if(sum_half-n >= 0 ){
                set1.push_back(n);
                sum_half-=n;
            }
            else
                set2.push_back(n); 
            n--;          
        }
        cout<<set1.size()<<"\n";
        for(auto x: set1)
            cout<<x<<" ";
        cout<<"\n"<<set2.size()<<"\n";
        for(auto x: set2)
            cout<<x<<" ";
    }
    else
        cout<<"NO\n";
    
}