#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<pii,int> p2i3;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool compareCustomers(p2i3 first , p2i3 second){
    return first.first.first < second.first.first; // Please ignore
}

int main(){
    fast_cin();
    vector<pair<pii,int>> customers;
    vector<pii> hotel;
    int ct = 0 , n ;
    cin>>n;
    vector<int> pos(n);
    for(int i = 0 ; i<n ; i++){
        int lf , rt;
        cin>>lf>>rt;
        customers.push_back(mp(mp(lf,rt),i));
    }
    sort(customers.begin() , customers.end() , compareCustomers); // Sorted on arrival date
    hotel.push_back(mp(INT_MIN,INT_MAX));
    for(auto it: customers){
        int ind = ct;
        while(ind>0){
            if(hotel[ind].second < it.first.first){
                hotel[ind] = it.first;
                pos[it.second] = ind;
                break;
            }
            ind--;
        }
        if(ind == 0){
            hotel.push_back(it.first);
            pos[it.second] = ++ct;
        }
    }
    cout<<ct<<"\n";
    for(auto it: pos)cout<<it<<" ";
    cout<<"\n";

    return 0;
}