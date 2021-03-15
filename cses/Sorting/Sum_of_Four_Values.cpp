#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define pllii pair< ll , pair < int , int > >
#define pii pair<int , int>
#define mp make_pair

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int n ; ll x;
    cin>>n>>x;
    vector<ll> arr(n);

    for(int i =0 ;i<n ; i++) cin>>arr[i];

    multimap<ll , pii> ord_map;
    for (int i = 0 ; i<n-1 ;i++){
        for(int j = i+1 ; j<n ;j++){
            ord_map.insert(mp(arr[i]+arr[j],mp(i,j)));
        }
    }

    for (auto it: ord_map){
        int key = x-it.first;     
        auto sc_el = ord_map.lower_bound(key); 
        auto itr2 = ord_map.upper_bound(key);
        if (sc_el != itr2){
            // auto sc_el = ord_map.find(x-it.first);
            if(sc_el->second.first != it.second.first && sc_el->second.second != it.second.second && sc_el->second.first != it.second.second && sc_el->second.second != it.second.first){
                cout<<it.second.first+1 <<" "<<sc_el->second.first+1<<" "<<it.second.second+1<<" "<<sc_el->second.second +1<<"\n";
                return 0;
            }
            sc_el++;
        }
    }
    cout<<"IMPOSSIBLE\n";

    return 0;
}