#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mp make_pair

int main(){
    fast_cin();
    int n ;
    vector<pii> movies;
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        int st , ed;
        cin>>st>>ed;
        movies.push_back(mp(ed,st));
    }
    sort(movies.begin(),movies.end());
    int ct = 0 , curr_end =0; bool first = true ;
    for(auto it: movies){
        if(first){
            curr_end = it.first;
            first = false;
            ct+=1;
            continue;
        }
        if(it.second >= curr_end){
            curr_end = it.first;
            ct+=1;
        }
    }
    cout<<ct;
    return 0;
}