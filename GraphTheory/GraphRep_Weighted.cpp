/**
 * @file GraphRep_Weighted.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This Program is intendedto show the representation of weighted graph 
 *        in CPP here graph is assumed to be directional 
 * @version 0.1
 * @date 2020-06-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[],int u , int v , int w){
    adj[u].push_back(make_pair(v,w)); //IF it was assumed to be an un directed graph the we would also add u to v adjacency list
}

void printGraph(vector<pair<int,int>>adj[] , int V){
    for(int i = 0; i<V ;i++){
        cout<<"Nodes Connected with "<<i<<" are\n";
        cout<<i<<"==|\n";
        for (auto X : adj[i]){
            int v = X.first;
            int w = X.second;
            cout<<"   |==>"<<v<<"("<<w<<")\n"; 
        }
        cout<<"\n";
    }

}

int main(){
    int V = 5;
    vector<pair<int,int>> *adj;
    adj = new vector<pair<int,int>>[V];
    addEdge(adj, 0, 1, 10); 
    addEdge(adj, 0, 4, 20); 
    addEdge(adj, 1, 2, 30); 
    addEdge(adj, 1, 3, 40); 
    addEdge(adj, 1, 4, 50); 
    addEdge(adj, 2, 3, 60); 
    addEdge(adj, 3, 4, 70); 
    printGraph(adj, V); 
    return 0;

}