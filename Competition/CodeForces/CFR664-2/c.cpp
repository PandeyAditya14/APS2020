#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i = 0; i<n ;i++) cin>>a[i];
    for(int i = 0; i<m ;i++) cin>>b[i];
    int ans = 0;
    for(int i = 0 ; i<n ; i++){
        int minC = INT_MAX;
        for(int j = 0;j<m ; j++) minC = min(minC,(a[i]&b[j]));
        ans|=minC;
    }
    cout<<ans<<"\n";
}