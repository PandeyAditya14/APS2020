/**
 * @file SCC.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This program is for finding the strongly connected components in a directed graph using Kosarju Algorithm
 * @version 0.1
 * @date 2020-06-15
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
}

void reverse_graph(vector<int>adj[] , vector<int> rev_adj[] ,int vertices){
    for (int i = 0 ;i <vertices ;i++)
        for (auto x: adj[i])
            addEdge(rev_adj,x,i);
}

void DFSRevUtil(vector<int>adj[] , vector<bool> &visited, int node){
    visited[node] = true;
    cout<<node<<"=>";
    for(auto x: adj[node]){
        if(!visited[x])
            DFSRevUtil(adj,visited,x);
    }
}

void DFSUtil(vector<int>adj[] , vector<bool> &visited , stack<int> &st , int node){
    visited[node] = true;
    for(auto x: adj[node]){
        if(!visited[x])
            DFSUtil(adj,visited,st,x);
    }
    st.push(node);
}

void findComponent(vector<int>adj[], int vertices){
    vector<bool> visited(vertices,false);
    stack<int> st;

    for (int i =0 ; i<vertices ; i++)
        if(!visited[i])
            DFSUtil(adj,visited,st,i);
    
    vector<int> *rev_adj = new vector<int>[vertices];
    reverse_graph(adj , rev_adj ,vertices);
    vector<bool> visited2(vertices,false);
    while(!st.empty()){
        int tmp = st.top();
        st.pop();
        if (!visited2[tmp]){
            DFSRevUtil(rev_adj,visited2,tmp);
            cout<<"/\n";
        }
    }

}

int main(){
    int vertices;
    cout<<"Enter Number of vertices: ";
    cin>>vertices;
    vector<int> *adj;
    adj = new vector<int>[vertices];
    cout<<"Enter the number of edges: ";
    int edges;
    cin>>edges;
    while(edges--){
        cout<<"Enter Vertice of the edge as  \"a b\" where edge is a=>b";
        int a , b;
        cin>>a>>b;
        addEdge(adj,a,b);        
    }
    findComponent(adj,vertices);   
    return 0;
}