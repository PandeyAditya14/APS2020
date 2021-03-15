#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define plli pair<ll,int>
#define mp make_pair
// using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main(){
    fast_cin();
    int n;
    ll x;
    cin>>n>>x;
    vector<ll> arr(n);
    for(int i = 0 ; i < n ; i++ ) cin>>arr[i];
    for(int i = 0 ; i < n ; i++){
        map<ll , int > ord_map;
        ll x_temp = x-arr[i];
        for (int j = 0 ; j < n ; j++){
            if ( i == j) continue;
            else{
                if( ord_map.count( x_temp - arr[j] ) ){
                    cout<<i+1 <<" "<<j+1<<" "<<ord_map[x_temp-arr[j]] + 1<<"\n";
                    return 0;
                }
                ord_map[arr[j]] = j;
            }
        }
    }
 
    cout<<"IMPOSSIBLE\n";
 
 
    return 0;
}