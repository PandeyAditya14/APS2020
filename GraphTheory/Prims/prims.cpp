/**
 * @file prims.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the implementation of Prims algorithm
 * @version 0.1
 * @date 2020-07-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
const int INF = INT_MAX;

int Prims(vector<ii> adj[] , vector<int> &p , int n){
    p.assign(n,-1);
    vector<int> key(n,INF);
    vector<bool> visited(n,false);
    key[0] = 0;
    p[0] = 0;
    int total = 0;
    for(int i = 0 ; i < n ; i++){
        int v = -1;
        for (int  j = 0 ; j<n ; j++){
            if(!visited[j] &&(v==-1 || key[v] > key[j]))
                v=j;
        }
    
    if(key[v] == INF)
    return -1;

    visited[v] = true;
    total+=key[v];
    for(auto edge: adj[v]){
        int to = edge.first;
        int w = edge.second;
        if(!visited[to] && w<key[to]){
            key[to] = w;
            p[to] = v;
        }
    }
    }
    return total;
}

int main(){
 int n,m;
 cin>>n>>m;
 vector<ii> *adj = new vector<ii>[n];
 for(int i = 0 ; i< m ; i++){
    int  u , v ,w;
    cin>>u>>v>>w;
    adj[u].push_back(ii(v,w));
    adj[v].push_back(ii(u,w));
 }
 vector<int> p;
 int ans = Prims(adj,p,n);
 cout<<"Total Weight: "<<ans<<"\n";
 cout<<"EDGES IN MST ARE: \n";
 for(int i = 1 ; i < n ; i++)cout<<i<<"---"<<p[i]<<"\n";
}