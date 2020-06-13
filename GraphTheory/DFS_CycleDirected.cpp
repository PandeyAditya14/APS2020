/**
 * @file DFS_CycleDirected.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is implementation of cycle detection in directed graph using DFS refer https://www.geeksforgeeks.org/detect-cycle-in-a-graph/ for theory.
 * @version 0.1
 * @date 2020-06-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
}

bool isCyclicUtil(vector<int> adj[] , int node , vector<bool> visited , vector<bool> recursion){
    if(!visited[node]){
        visited[node] =true;
        recursion[node] = true;

        for (auto it : adj[node]){
            if(!visited[it] && isCyclicUtil(adj,it,visited,recursion))
                return true;
            else if (recursion[it])
                return true;
        }
    }
    else{
        recursion[node]=false;
        return false;
    }

}

bool isCyclic(vector<int>adj[] , int size){
    vector<bool> visited(size,false);
    vector<bool> recursion(size,false);

    for (int i = 0; i<size  ; i++)
        if(isCyclicUtil(adj , i, visited, recursion))
            return true;
    
    return false;
}
int main(){
    int vertices = 4;
    vector<int> *adj;
    adj = new vector<int>[vertices];
    addEdge(adj,0, 1); 
    addEdge(adj,0, 2); 
    addEdge(adj,1, 2); 
    // addEdge(adj,2, 0); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 3); 
    if(isCyclic(adj , vertices)){
        cout<<"CYCLE DETECTED\n";
    }
    else{
        cout<<"NO CYCLE DETECTED\n";
    }
    return 0;
}