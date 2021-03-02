#include <bits/stdc++.h> 
#define MAX 10000000001
#define MOD 1000000007
#define ll long long int
using namespace std; 

ll printGolombSequence(ll L, ll N) 
{   
    ll ans = 0;
    ll arr[N+1]; 
    map<ll, ll> M;
    ll cnt = 0; 
    arr[0] = 0; 
    arr[1] = 1; 
    M[2] = 2; 
    
    for (int i = 2; i <= N; i++) { 
        if (cnt == 0) { 
            arr[i] = 1 + arr[i - 1]; 
            cnt = M[arr[i]]; 
            cnt--; 
        } 
        else { 
            arr[i] = arr[i - 1]; 
            cnt--; 
        } 
        M[i] = arr[i]; 
    }
    for(ll i =  L ; i<=N ; i++){
        ans=ans%MOD + (arr[i]*arr[i])%MOD;
    }
    return ans%MOD;
} 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        ll l,r,ans;
        cin>>l>>r;
        ans = printGolombSequence(l,r);
        cout<<ans<<"\n"; 
    }
    
    return 0; 
} 