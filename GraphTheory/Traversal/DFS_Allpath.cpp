/**
 * @file DFS_Allpath.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the implementation for finding all the possible path between two points
 * @version 0.1
 * @date 2020-06-13
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] ,int u , int v){
    adj[u].push_back(v);
}

void allPathUtil(vector<int> adj[], vector<bool> &visited ,int path[],int index, int node , int v){
    visited[node] = true;
    // cout<<index;
    path[index] = node;
    index++;

    if( node == v){
        for (int x =0 ; x < index ; x++){
            cout<<path[x]<<"=>";
        }
        cout<<"/\n";
    }
    else{
        for(auto x: adj[node]){
            if(!visited[x])
                allPathUtil(adj,visited,path,index,x,v);
        };
    }
    index--;
    visited[node]=false;


}

void allPath(vector<int> adj[], int size , int u ,int v){
    vector<bool> visited(size,false);
    int *path = new int[size];
    int index = 0;
    allPathUtil(adj,visited,path,index,u,v);
}

int main(){
    int vertices = 4;
    vector<int> *adj;
    adj = new vector<int>[vertices];
    addEdge(adj,0, 1); 
    addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,2, 0); 
    addEdge(adj,2, 1); 
    addEdge(adj,1, 3); 
    allPath(adj,vertices,2,3);
    return 0;

}