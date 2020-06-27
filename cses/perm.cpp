/**
 * @file perm.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is implementation for CSES problem Permutation https://cses.fi/problemset/task/1070
 * @version 0.1
 * @date 2020-06-19
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
using  namespace std;

inline void solve(int n ){
    int max_even , max_odd;
    if (!(n & 1)){
        max_even = n;
        max_odd=n-1;
    }
    else{
        max_odd=n;
        max_even=n-1;
    }
    while(max_odd>0)
        {
            cout<<max_odd<<" ";
            max_odd-=2;
        }
    while(max_even>0){
        cout<<max_even<<" ";
        max_even-=2;
    }
}

int main(){ 
    int n;
    cin>>n;
    if(n==1)
        cout<<1;
    else if(n<4)
        cout<<"NO SOLUTION";
    else
        solve(n);
    return 0;
}