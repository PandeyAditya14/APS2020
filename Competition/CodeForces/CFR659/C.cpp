#include<bits/stdc++.h>
using namespace std;
const int ALP = 20;

void dfs(vector<int> adj[] , vector<bool> &visited , int u){
    visited[u] = true;
    for(auto x: adj[u]){
        if(!visited[x])
            dfs(adj,visited,x);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b;
        cin>>n>>a>>b;
        vector<int> adj[ALP];
        bool ok = true;
        for(int i = 0; i<n;i++){
            if(a[i] != b[i]){
                if(a[i]>b[i]) {ok = false; break;}
                adj[a[i]-'a'].push_back(b[i]-'a');
                adj[b[i]-'a'].push_back(a[i]-'a');
            }
        }
        if(!ok){cout<<"-1\n"; continue;}
        vector<bool> visited(ALP,false);
        int ans=ALP;
        for(int i = 0 ; i<ALP ; i++){
            if(!visited[i]){
                dfs(adj,visited,i);
                ans--;
            }
        }
        cout<<ans<<"\n";
    }
}