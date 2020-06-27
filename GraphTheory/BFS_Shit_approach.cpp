/**
 * @file BFS.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief The porgram is implementation of BFS on undirected unweighted  graph
 * @version 0.1
 * @date 2020-06-14
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
void printPath(int source , int target ,vector<bool> used , vector<int>p){
    if(!used[target]){
        cout<<"NO PATH";
    }
    else{
        vector<int> path;
        for (int v = target ; v!= -1 ; v=p[v])
            path.push_back(v);
        reverse(path.begin(),path.end());
        for(auto x: path)
            cout<<x<<"=>";
        cout<<"/\n";
    }


}

void BFSUtil(vector<int>adj[], vector<bool> &used , vector<int> &d , vector<int> &p,queue<int> &q, int source){
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for (auto x: adj[v]){
            if(!used[x]){
                used[x] = true;
                q.push(x);
                d[x] = d[v] +1;
                p[x] = v;
            }
        }
    }
    return;
}

void BFS(vector<int> adj[] , int source , int size , int target){
    vector<bool> used(size,false);
    vector<int> d(size) , p(size);
    queue<int> q;
    q.push(source);
    used[source] = true;
    d[source] = 0;
    p[source] = -1;
    BFSUtil(adj,used,d,p ,q,source);
    printPath(source,target,used,p);
    return;
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
    BFS(adj,6,vertices,12);
    return 0;
}