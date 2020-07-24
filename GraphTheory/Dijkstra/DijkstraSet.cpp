/**
 * @file DijkstraSet.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the implementaion of sparse dijkstra using STL set
 * @version 0.1
 * @date 2020-07-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
const int INF = INT_MAX;

void dijkstra(vector<ii> adj[] , vector<int> &d , vector<int> &p , int source , int n){
    d.assign(n , INF);
    p.assign(n,-1);
    d[source] = 0;
    p[source] = source;
    set<ii> q;
    q.insert(ii(0,source));
    while(!q.empty()){
        int v = q.begin()->second;
        q.erase(q.begin());

        for(auto edge : adj[v]){
            int to = edge.first;
            int weight = edge.second;
            if(d[to] > d[v] + weight){
                q.erase(ii(d[to],to));
                d[to] = d[v] + weight;
                p[to] = v;
                q.insert(ii(d[to],to));
            }

        }
    }

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<ii> *adj;
    adj = new vector<ii>[n];
    vector<int> d,p;
    for(int i = 0 ; i< m ; i++){
        int u , v, w;
        cin>>u>>v>>w;
        adj[u].push_back(ii(v,w));
    }
    dijkstra(adj,d,p,0,n);
    vector <int> path;
    int i;
    for(i = n-1 ; i!=p[i] && i!=-1 ; i=p[i]) path.push_back(i);
    path.push_back(i);
    reverse(path.begin() , path.end()) ;
    for(auto node : path) cout<<node<<"=>";
    cout<<"/"; 
}