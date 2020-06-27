/**
 * @file DepthFirstForest.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This program can be used to traverse through undirected connected componenets or traverse through Depth First forest 
 * @version 0.1
 * @date 2020-06-15
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSUtil(vector<int> adj[] , vector<bool> &visited , int node){
    visited[node]=true;
    cout<<node<<"=>";
    for (auto x: adj[node]){
        if(!visited[x])
            DFSUtil(adj,visited,x);
    }
}

void DFS(vector<int> adj[] , int size){
    vector<bool> visited(size,false);
    for (int i = 0; i< size ; i++){
        if (!visited[i]){
            DFSUtil(adj,visited,i);
            cout<<"/\n";
        }
    }
}

int main(){
    int vertices = 5;
    vector<int> *adj = new vector<int>[vertices];
    addEdge(adj,1,0);
    addEdge(adj,1,2);
    addEdge(adj,3,4);
    
    DFS(adj,vertices);

    return 0;
}
