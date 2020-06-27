/**
 * @file BFS.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief BFS implementation clean and simple
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
    adj[v].push_back(u);
}

void printBFS(vector<int> p , int target){
    vector<int> path;
    for (int t = target ; t!= -1 ; t=p[t])
        path.push_back(t);
    reverse(path.begin() , path.end());
    for (auto x: path)
        cout<<x<<"=>";
    cout<<"/\n";
}

void BFS(vector<int> adj[] , int size , int source , int target){
    vector<bool> used(size,false);
    queue<int> q;
    vector<int> d(size) , p(size);
    q.push(source);
    used[source]=true;
    d[source]=0;
    p[source] = -1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: adj[u]){
            if (!used[v]){
                used[v] = true;
                d[v] = d[u] + 1;
                p[v] = u;
                q.push(v);
            }
        }
    }
    printBFS(p,target);
}

int main(){
    int vertices = 13;
    vector<int> *adj;
    adj = new vector<int>[vertices];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,0,3);
    addEdge(adj,1,4);
    addEdge(adj,1,5);
    addEdge(adj,1,6);
    addEdge(adj,2,7);
    addEdge(adj,2,8);
    addEdge(adj,2,9);
    addEdge(adj,3,10);
    addEdge(adj,3,11);
    addEdge(adj,3,12);
    BFS(adj,vertices,6,12);
    return 0;
}