/**
 * @file WeirdAlgo.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is solution to CSES task Weird Algorithm
 * @version 0.1
 * @date 2020-06-19
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
    while (n>1){
        cout<<n<<" ";
        if (!( n & 1))
            n/=2;
        else
            n = n*3 + 1;
    }
    cout<< 1 ;
    return 0;
}