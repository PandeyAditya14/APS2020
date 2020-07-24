/**
 * @file DFS_Bipartite.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This program is implementation of the concept of testing if a graph(undirected) is bipartite or not using DFS
 * @version 0.1
 * @date 2020-06-13
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] , int u ,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
} 

bool isBipartite(vector<int> adj[] , int v , vector<bool> &visited , vector<int> &color){
    visited[v] = true;
    for (auto it : adj[v]){
        if (!visited[it]){
            color[it] = !color[v];
            if(!isBipartite(adj,it,visited,color))
                return false;
        }
        else if(color[v] == color[it])
            return false;
    }
    return true;
}

void bipartiteCaller(vector<int> adj[] , int size ,int node){
    vector<bool> visited(size,false);
    vector<int> color(size);
    color[node] =1;
    if(!isBipartite(adj,node,visited,color))
        cout<<"GRAPH IS NOT BIPARITE\n";
    else
        cout<<"GRAPH IS BIPIRATITE\n";
}

int main(){
    int vertices = 6;
    vector<int> *adj;
    adj = new vector<int>[vertices];
    addEdge(adj, 0, 1); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    addEdge(adj, 4, 0); 
    addEdge(adj, 5, 0);
    bipartiteCaller(adj , 6 , 0) ;
    return 0;
}