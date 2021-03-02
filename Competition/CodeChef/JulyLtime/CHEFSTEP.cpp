#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll x;
        cin>>n>>x;
        string st;
        for(int i = 0; i<n;i++){
            ll temp;
            cin>>temp;
            if(temp%x == 0){
                st=st+'1';
            }
            else{
                st=st+'0';
            }
        }
        cout<<st<<"\n";
    }
}