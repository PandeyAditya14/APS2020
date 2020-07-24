/**
 * @file Djikstra.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution to Codeforces 20 C 
 * @version 0.1
 * @date 2020-07-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const int INF = INT_MAX;
bool dijkstra(vector<pair<int,int>> adj[] , vector<int> &d , vector<int> &p , int source, int n,int target){
    d.assign(n+1,INF);
    p.assign(n+1,-1);
    d[source] = 0;
    p[source] = source;
    vector<bool> visited(n,false);
    for(int i = 1 ; i<= n ; i++){
        int v =-1;
        for(int j  = 1; j<=n ; j++)
            if(!visited[j] && (v== -1 || d[v] > d[j]))
                v=j;
        if(d[v] == INF)
            break;
        visited[v] = true;
        for(auto edge : adj[v]){
            int to =  edge.first;
            int weight = edge.second;
            if(d[to]> weight+d[v]){
                d[to] = weight + d[v];
                p[to] = v;
            }
        }
    }
    if (p[target] ==-1)
        return false;
    else
        return true;
    
}
void path(vector<int> p , int target){
    if (p[target] == -1){
        cout<<-1;
        return;
    }
    vector<int> path;
    int i;
    for ( i = target ; i!=p[i]; i=p[i]) path.push_back(i);
    path.push_back(i);
    reverse(path.begin() , path.end());
    for(auto node: path) cout<<node<<" ";
}

int main(){
    IOS;
    int n, m ;
    cin>>n>>m;
    vector<pair<int,int>> *adj = new vector<pair<int,int>>[n+1];
    for(int i = 0 ; i< m ; i++){
        int u , v ,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    vector<int> d , p;
    if(dijkstra(adj,d,p,1,n,n)){
        vector<int> path;
        int i;
        for ( i = n ; i!=p[i]; i=p[i]) path.push_back(i);
        path.push_back(i);
        reverse(path.begin() , path.end());
        for(auto node: path) cout<<node<<" ";
    }
    else{
        cout<<-1;
    }
    
}