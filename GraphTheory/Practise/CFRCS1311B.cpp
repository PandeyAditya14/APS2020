/**
 * @file CFRCS1311B.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief CodeForces 1311/B solution
 * @version 0.1
 * @date 2020-07-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] ,int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void solve(vector <int> a , vector <int> p , vector<int> adj[]){
int n = a.size();

vector<int> final = a;
sort(final.begin(),final.end());
bool flag = true;
for(int i = 1 ; i<n && flag ; i++){
    vector<bool> visited(n,false);
    stack<int> st;
    if (a[i] != final [i]){
        flag = false;
        st.push(i);
        while(!st.empty()){
            if(a[st.top()] == final[i]){
                a[st.top()] = a[i];
                a[i] = final[i];
                flag = true; 
            }
            int x = st.top();
            st.pop();
            visited[x] = true;
            for(auto it: adj[x])
                if(!visited[it])
                    st.push(it);
        }
    }
}
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}   

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        vector<int> *adj; 
        adj = new vector<int>[n+1];
        vector<int> a(n+1) , p(m+1);
        for(int i =1 ; i<=n ; i++){
             cin>>a[i];
        } 
        for(int i =1 ; i<=m ; i++) {
            int temp;
            cin>>temp;
            p[i] = temp;
            addEdge(adj , temp , (temp + 1));
        }
        solve(a,p,adj);
    
    }
    
}