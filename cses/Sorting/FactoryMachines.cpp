#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    //TODO: 1. we need to binay seach for the time where the product requirement is met
    //      2. Thus we need to create a function f() that take input of time and outputs the products manufactured
    //      3. For this function f() werun a binary search over the exhaustive range from 0 -> 1e18 and check where f() >= t
    int n;
    ll t;
    cin>>n>>t;
    
    vector<ll> k(n);

    for(int i = 0 ; i<n ; i++)cin>>k[i];

    if( n==1 ){
        cout<<(t*k[0])<<"\n";
        return 0;
    }

    ll low = 0 , hi = 1e18 , mid ,ans;
    while(low < hi){
        mid = (low+hi)/2;
        ll sol=0;
        for(int i = 0 ; i < n ; i++){ // Finding the total number of products manufactured 
            sol+=mid/k[i];
            if(sol>=t) break;
        }
        if(sol >=t ){ // Binary search logic -> matching lower half
            ans = mid;
            hi = mid;
        }
        else{ // B Search ->matching upper half
            low = mid+1;
        }
    }
    cout<<ans<<"\n"; //Recent time where the time was sufficient for the production of the necessary products

    return 0;
}