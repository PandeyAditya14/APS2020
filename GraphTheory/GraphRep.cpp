/**
 * @file GraphRep.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief Simple Graph implementation in CPP using STL Can be used for Competetive Prgramming
 * @version 0.1
 * @date 2020-06-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[] , int u, int i){
    adj[u].push_back(i); // As we consider this to be undirected graph we add 
    adj[i].push_back(u); // each element to each other's adjacency list
}

void printGraph(vector<int>adj[],int v){
    for(int i=0;i<v ; i++){
        cout<<"Vertices COnnected from \n"<<i<<"==\n";
        for (auto x : adj[i])
            cout<<"  |===>"<<x<<"\n";
        cout<<"\n";
    }
}


int main(){
    int V =5;
    vector<int> *adj;
    adj = new vector<int>[V];
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printGraph(adj, V);
    return 0;

}