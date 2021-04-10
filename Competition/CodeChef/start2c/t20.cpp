#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    ll r , o , c;
    cin>>r>>o>>c;
    ll max_p = c + (20 - o)*36;
    if(max_p > r) cout<<"YES\n";
    else cout<<"NO\n";
}