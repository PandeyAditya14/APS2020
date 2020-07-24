/**
 * @file DijkstraPQ.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the priority queue implementation of Dijkstra algo
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

void dijkstra(vector<ii> adj[] , vector<int> &p , vector<int> &d , int source , int n){
    d.assign(n,INF);
    p.assign(n,-1);
    d[source] = 0;
    p[source] = source;
    priority_queue<ii ,vector<ii>, greater<ii>> q;
    vector<bool> visited(n,false);
    q.push(ii(0,source));
    while(!q.empty()){
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if(d_v != d[v])
            continue;
        for(auto edge : adj[v]){
            int to = edge.first;
            int weight = edge.second;
            if(d[to] > d[v] + weight){
                d[to] = d[v] + weight;
                p[to] = v;
                q.push(ii(d[to] , to));
            }
        }

    }
}

int main(){
    int n , m;
    cin>>n>>m;
    vector<ii> *adj;
    adj = new vector<ii>[n];
    vector<int> p , d;
    for(int i = 0 ; i<m ; i++){
        int u , v , w;
        cin>>u>>v>>w;
        adj[u].push_back(ii(v,w));
    }
    dijkstra(adj,p,d,0,n);
     vector <int> path;
    int i;
    for(i = n-1 ; i!=p[i] && i!=-1 ; i=p[i]) path.push_back(i);
    path.push_back(i);
    reverse(path.begin() , path.end()) ;
    for(auto node : path) cout<<node<<"=>";
    cout<<"/";

}