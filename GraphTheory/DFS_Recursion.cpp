/**
 * @file DFS_Recursion.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief   This program is implementation of DFS traversal on a given graph in form of an adjacency list
 *          by using recursion with the assumption of Undirected Graph
 * @version 0.1
 * @date 2020-06-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] ,int u, int v){
    adj[u].push_back(v);
}


/**
 * @brief Performs DFS traversal on a graph on basis of provided adjacency mat and visited array
 * 
 * @param adj type: vector<int> ; desc: adjacency list
 * @param visited type: vector<bool> ; desc: visited list
 * @param node type: vector<bool> ; desc: root node
 */
void DFS_Util(vector<int> adj[], vector<bool> visited, int node){
    visited[node]=true;
    cout<<node<<"=>";
    for (auto it: adj[node]){
        if(!visited[it])
            DFS_Util(adj,visited,it);
    }

}
/**
 * @brief Wrappe Function For DFS_Util which creates a vector visited of type bool
 * 
 * @param adj type: vector<int>[] ; desc:adjacency list
 * @param size type : int ; desc: number of vertices
 * @param node type:int ; desc: rootnode default = 0 
 */
void DFS(vector<int> adj[] ,int size, int node=0){
    vector<bool> visited(size,false);
    DFS_Util(adj,visited,node); // For Depth First Forest See https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/
    cout<<"/\n";
}

int main(){
    int V =5;
    vector<int> *adj;
    adj = new vector<int>[V];
    addEdge(adj, 1, 0); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 2, 1); 
    addEdge(adj, 0, 3); 
    addEdge(adj, 1, 4); 
    DFS(adj,5,0);
}