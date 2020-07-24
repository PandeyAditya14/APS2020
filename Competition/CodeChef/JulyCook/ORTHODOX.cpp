/**
 * @file ORTHODOX.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This Solution for JUly CookOFF 
 * @link https://discuss.codechef.com/t/orthodox-editorial/72331
 * @version 0.1
 * @date 2020-07-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <bits/stdc++.h>
using namespace std;
using vi = vector <int> ;
using ll = long long;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

const int N=1e5+5;
const int LIM = 60;

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i = 0;i<n;i++) cin>>arr[i];
        if(n>LIM){
            cout<<"NO\n";
            continue;
        }
       
        set<ll> se;
        bool flag=true;
        for(int i = 0; i<n ; i++){
            ll cur  = 0;
            if(!flag) break;
            for(int j = i ; j<n ; j++){
                cur|=arr[j];
                if(se.find(cur) != se.end()){
                    flag=false;
                    break;
                }
                se.insert(cur);
            }
            
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}