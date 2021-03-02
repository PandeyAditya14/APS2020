#include<bits/stdc++.h>
using namespace std;
using  ll= long long int;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k , p ,ans=LONG_LONG_MAX , pos=-1;
        cin>>n>>k;
        for(int i = 0; i<n ; i++){
            cin>>p;
            if(p<= k && k%p == 0){
                if(ans>(floor(k/p) - 1)){
                    ans = (floor(k/p)-1);
                    pos = p;
                }
            }
        }
        cout<<pos<<"\n";
    }
}