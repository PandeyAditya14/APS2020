/**
 * Q:https://cses.fi/problemset/task/1164/
 * ANS: https://usaco.guide/solutions/cses-1164?lang=cpp
 * EXPLANATION: ->sort based on incoming
 *              ->then input every room room allocation to a min heap
 *              ->for every element of the customers check the min heap for the departing customers
 *              ->If the departure is before our arrival then use their room else create a new room
 */

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

int main(){
    fast_cin();
    int n;
    cin>>n;
    vector<p2i3> customers;
    for(int i = 0 ; i < n ; i++){
        int lf , rt ;
        cin>>lf>>rt;
        customers.push_back(mp(mp(lf,rt),i));
    }
    sort(customers.begin() , customers.end());
    int ans[n];
    priority_queue< pii > hotel;
    int no_rooms = 0;
    for(auto it : customers){
        if(hotel.empty()){
            hotel.push(mp(-it.first.second , ++no_rooms));
            ans[it.second] = no_rooms;
        }
        else{
            auto temp_cust = hotel.top();
            if( -temp_cust.first < it.first.first ){
                hotel.pop();
                hotel.push(mp(-it.first.second , temp_cust.second));
                ans[it.second] = temp_cust.second;
            }
            else{
                hotel.push(mp(-it.first.second , ++no_rooms));
                ans[it.second] = no_rooms;
            }
        }
    }
    cout<<no_rooms<<"\n";
    for(int i = 0 ; i < n ; i++) cout<<ans[i]<<" ";
    cout<<"\n";
}