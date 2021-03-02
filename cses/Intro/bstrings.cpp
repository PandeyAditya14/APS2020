/**
 * @file bstrings.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the intial solution for Bit Strings that didn't work for all test Cases
 *        Question at https://cses.fi/problemset/task/1617
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
#define ll unsigned long long
#define BIGNUM 1000000007
using namespace std;


int main(){
    int n;
    cin>>n;
    ll bigNum = (1ULL<<n)%BIGNUM;
    cout<<bigNum;
}