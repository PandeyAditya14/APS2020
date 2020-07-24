/**
 * @file SHPATH.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution to SPOJ SHPATH
 * @version 0.1
 * @date 2020-07-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
typedef pair<string,int> si;
typedef pair<int ,int> ii;
const int INF = INT_MAX;
void dijkstra (vector<pair<int,int>> adj[] ,vector<int> &d , vector<int> &p , int source , int target , int n){
    d.assign(n+1,INF);
    p.assign(n+1,-1);
    d[source] = 0;
    p[source] = 5;
    vector<bool> visited(n+1 , false);
    for(int i = 1 ; i<=n ; i++){
        int v = -1;
        for(int j = 1 ; j <= n; j++)
        if(!visited[j] &&(v== -1 || d[v] > d[j]))
            v=j;
        
        if(d[v] == INF)
            break;
        visited[v] = true;
        if(v==target)
            return;
        for(auto edge: adj[v]){
            int to = edge.first;
            int weight = edge.second;
            if(weight + d[v] < d[to]){
                d[to] = weight + d[v];
                p[to]  = v;
            }
        }
    }
}

int main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        unordered_map<string, int> decode;
        int n;
        cin>>n;
        vector<ii> *adj = new vector<ii>[n+1];
        vector<int> d , p;
        for(int i = 1 ; i<= n ; i++){
            string temp;
            cin>>temp;
            int ncon , to , cost;
            decode[temp] = i;
            for (int j = 0; j<ncon ; j++){
                cin>>to>>cost;
                adj[i].push_back(ii(to,cost));
            }
        }
        int r;
        cin>>r;
        while(r--){
            string from,to;
            cin>>from;
            cin>>to;
            int u = decode.find(from)->second;
            int v = decode.find(to)->second;
            dijkstra(adj,d,p,u,v,n);
            cout<<d[v]<<"\n";
        }
    }
}