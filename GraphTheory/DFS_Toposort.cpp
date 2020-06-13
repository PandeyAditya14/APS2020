/**
 * @file DFS_Toposort.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This program is for demonstration of topological sort on Directed Acyclic Graph
 * @version 0.1
 * @date 2020-06-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define trace(x)  for (auto itr : x)
using namespace std;

void addEdge(vector<int> adj[],  int u , int v){
    adj[u].push_back(v);
}

void topologicalSortUtil(vector<int>adj[] , int node , vector<bool> &visited , stack<int> &st){
    visited[node]=true;

    // cout<<"**"<<node<<" ";
    // trace(visited) cout<<itr<<" ";
    // cout<<"\n";
   for(auto it: adj[node]){
       if (!visited[it]){
            // cout<<it<<" "<<visited[it]<<"\n";
            topologicalSortUtil(adj,it,visited,st);

        }
   }
   st.push(node);
}

void topologicalSort(vector<int> adj[] , int size){
    vector<bool> visited(size,false);
    stack<int> st;

    for ( int i = 0 ; i < size ;i ++)
        if(!visited[i]){
            // cout<<i<<"\n";
            topologicalSortUtil(adj , i , visited , st);
            }
            

    while(!st.empty()){
        int x = st.top();
        st.pop();
        cout<<x<<"=>"; 
    }
    cout<<"/\n";
}

int main(){
    int vertices = 6;
    vector<int> *adj;
    adj = new vector<int>[vertices];
    addEdge(adj,5, 2); 
    addEdge(adj,5, 0); 
    addEdge(adj,4, 0); 
    addEdge(adj,4, 1); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1); 
    topologicalSort(adj,vertices); 

    return 0;
}

// 5=>0=>2=>3=>1=>4=>1=>0=>3=>1=>2=>3=>1=>1=>0=>/