/**
 * @file apDivision.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution to CSES task 1623 Apple Division https://cses.fi/problemset/task/1623  
 * @version 0.1
 * @date 2020-06-24
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<ll> set(n);
    while(n--){
        ll temp;
        cin>>temp;
        set.push_back(temp);
    }
    sort(set.begin() , set.end() , greater<ll>());
    ll set1 = 0 , set2 = 0;
    for(auto x: set){
        if(set1<set2)
            set1 +=x;
        else
            set2+=x;
    }
    
    cout<<abs(set1 -set2);
    return 0;
} 