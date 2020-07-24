/**
 * @file DFS_Stack.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This Program is intended for implementation of DFS using stack and adjacency List
 *        assuming that the graph is directed
 * @version 0.1
 * @date 2020-06-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;


/**
 * @brief adding edges to the adjacency matrix
 * 
 * @param adj type(vector<int>[]) is the adjcency list
 * @param u  type(int) for directed Graph from node
 * @param v  type(int) for directed Graph to node
 */
void addEdge(vector<int> adj[], int u , int v){
    adj[u].push_back(v);
}

/**
 * @brief DFS function which prints DFS traversal of the Graph
 * 
 * @param adj type(vector<int>[]) is the adjcency list
 * @param V  type(int) is the number of nodes in the graph
 * @param StartNode type(int) is the startPoint for the DFS traversal
 */
void DFS(vector<int> adj[] , int V ,int StartNode){
    vector<bool> visited(V,false);
    stack<int> s;
    s.push(StartNode);
    while(!s.empty()){
        int x = s.top();
        s.pop();
        if(!visited[x]){
            visited[x]=true;
            cout<<x<<"=>";
        }
        for (auto it : adj[x]){
            if (!visited[it])
                s.push(it);
        }
    }
    cout<<"/\n";

}
 
int main(){
    int V = 5;
    vector<int> *adj;
    adj = new vector<int>[V];
    addEdge(adj, 1, 0); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 2, 1); 
    addEdge(adj, 0, 3); 
    addEdge(adj, 1, 4); 
    DFS(adj,5,0);
    return 0;
 }