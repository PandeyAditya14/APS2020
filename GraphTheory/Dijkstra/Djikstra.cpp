/**
 * @file Djikstra.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is an implementation of dijkstra's Algorithm 
 * @version 0.1
 * @date 2020-07-05
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
void addEdge(vector<pair<int,int>> adj[] , int u , int v , int w){
    adj[u].push_back(make_pair(v,w));
}

void dijkstra(vector<pair<int,int>> adj[] , vector<int> &d , vector<int> &p , int start , int size){
    d.assign(size , INF);
    p.assign(size , -1);
    vector<bool> visited(size,false);
    d[start] = 0;
    p[start] = start;
    for (int i = 0 ; i<size ; i++){
        int v = -1 ;
        for(int j = 0  ; j<size ;j++)
            if(!visited[j] && (v == -1 || d[j] < d[v]))
                v = j;
        if(d[v] == INF)
            break;
        visited[v] = true;
        for (auto edge : adj[v]){
            int to = edge.first;
            int len = edge.first;
            if((len + d[v]) < d[to]){
                d[to] = len+d[v];
                p[to] = v;
            }
        }
    }

}

void printPath(vector<int> p , int target){
    vector<int> path;
    int index = target;
    while(p[index]!= index){
        path.push_back(index);
        index = p[index];
    }
    path.push_back(index);
    reverse(path.begin() , path.end() );
    for ( auto x : path) cout<<x<<"=>";
    cout<<"/\n";
}

int main(){
    vector<pair<int,int>> *adj;
    vector<int> d , p ;
    int n , m;
    cin>>n>>m;
    adj = new vector<pair<int,int>>[n];
    for(int i=0;i<m ;i++){
        int u , v ,w;
        cin>>u>>v>>w;
        addEdge(adj,u,v,w);
    }
    dijkstra(adj,d,p,5,n);
    printPath(p,0);
}