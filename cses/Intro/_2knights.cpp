/**
 * @file _2knights.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the implementation of question CSES https://cses.fi/problemset/task/1072 refer the answer from https://math.stackexchange.com/questions/3266257/number-of-ways-two-knights-can-be-placed-such-that-they-dont-attack?newreg=f7594b8527d84dd5b253b009ae3a70f1#comment6716632_3266324
 * @version 0.1
 * @date 2020-06-19
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(int n){
    ll zero = 0;
    ll ans;
    ans = (n*n*(n*n -1))/2;
    ans = ans-4*((n-2)*(n-1));
    cout<<max(zero,ans)<<"\n";
}

int main(){
    int n;
    cin>>n;
    for (int i = 1 ; i<n +1 ; i++)
        solve(i);
    return 0;
}