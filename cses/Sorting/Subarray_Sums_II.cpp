#include<bits/stdc++.h>

#define ll long long int 
#define pill pair< int , ll >

using namespace std;

#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int n ; ll x;
    cin>>n>>x;

    vector<ll> arr(n);
    for(int i = 0 ; i < n ; i++) cin>>arr[i];

    map<ll , int> umap;
    umap[0]+=1;
    ll ans=0;
    ll curr_sum=0LL;
    for(int i = 0 ; i < n ; i++){
        curr_sum+=arr[i]; // preifx sum to the current element
        ans+=umap[curr_sum - x]; //If greater than target then segment that can be delete
        umap[curr_sum]+=1; // Increment the count of prefix sum
    }
    cout<<ans<<"\n";
}