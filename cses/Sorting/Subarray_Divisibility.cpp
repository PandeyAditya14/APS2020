#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define plli std::pair<ll,int>
#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int n ;
    cin>>n;
    vector<ll> arr(n);
    // map<ll,int> ct_map;
    ll curr_sum =0 ;
    arr[curr_sum] = 1 ;    
    for(int i = 0 ; i< n ; i++){
        ll temp;
        cin>>temp;
        curr_sum+=temp;
        arr[(curr_sum % n + n) % n]++;
    }
    ll res = 0;
    for(auto x : arr){
        res+=(x*(x-1) /2);
    }

    cout<<res<<"\n";
}