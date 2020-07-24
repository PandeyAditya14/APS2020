/**
 * @file CDFRCS862B.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the solution for Codeforces problem Codeforces 862B
 * @version 0.1
 * @date 2020-07-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
using namespace std;

long long col[2] = {0,0};
void addEdge(vector <int> adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(vector<int>adj[] , int node , int color ,vector<bool> &visited){
    col[color]++;
    visited[node] = true;
    for(auto x : adj[node]){
        if(!visited[x]){
         dfs(adj,x,!color,visited);   
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector <int> *adj;
    adj = new vector<int>[n];
    for(int i = 0 ; i <n-1 ;i++){
        int n , m;
        cin>>n>>m;
        addEdge(adj,n-1,m-1);
    }
    vector<bool> visited(n,false);
    dfs(adj,0,0,visited);
    cout<<(col[1]*col[0]) - (n-1); 
}