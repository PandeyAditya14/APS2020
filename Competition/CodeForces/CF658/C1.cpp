/**
 * @file C1.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution to codeforces round 658 div 2 question C1 its the implementatin of the editorial provided\
 * @link https://codeforces.com/blog/entry/80427
 * @version 0.1
 * @date 2020-08-04
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
using namespace std;
const string sg = "01";
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b;
        cin>>n>>a>>b;
        vector<int> ops;
        for(int i = n-1 ; i>=0 ; i--){
            if(a[i] != b[i]){
                if(a[0] == b[i]){
                    ops.push_back(1);
                    a[0]=sg[!(a[0] - '0')];
                }
                reverse(a.begin(),a.begin()+i+1);
                for(int j = 0 ; j<=i ; j++) a[j]=sg[!(a[j] - '0')];
                ops.push_back(i+1);
            }
        }
        cout<<ops.size()<<" ";
        for(auto x:ops) cout<<x<<" ";
        cout<<"\n";
    }
}