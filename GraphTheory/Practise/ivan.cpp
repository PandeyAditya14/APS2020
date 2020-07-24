/**
 * @file ivan.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution for Ivan's Car
 * @version 0.1
 * @date 2020-07-05
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
void dijkstra(vector<pair<int,int>> adj[] , vector<int> &p , vector<int> &d ,vector<int> &u , int source ,int n){
    d.assign(n,INF);
    p.assign(n,-1);
    u.assign(n,0);
    vector<bool> visited(n , false);
    d[source] = 0;
    u[source] = -1;
    for(int i = 0 ; i< n ; i++){
        int v =-1;
        for ( int j = 0 ; j< n ; j++)
            if (!visited[j] && (d[j] < d[v] || v==-1))
                v= j;
    
        if(d[v] == INF)
            break;
        visited[v] = true;
        for(auto edge : adj[v]){
            int to = edge.first;
            int orient  = edge.second;
            int x = u[v]==-1? 0 :(d[v] + u[v]^orient);
            if(x<d[to]){
                d[to] = x;
                p[to] = v;
                u[to] = orient;
            }
        }
    }

}

int main(){
    int n , m;
    vector<pair<int,int>> *adj;
    cin>>n>>m;
    adj = new vector<pair<int,int>>[n];
    for(int i = 0 ; i< m ; i++){
        int u , v;
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(make_pair(v,1)); // upwards orientation
        adj[v].push_back(make_pair(u,0)); // downwards oreintation
    }
    vector<int> p , d , u; // p -> for path , d-> no of gear change , u -> for orientation relative to last point
    int source , target;
    cin>>source>>target;
    dijkstra(adj,p,d,u,source-1,n);
    cout<<d[target-1];
}