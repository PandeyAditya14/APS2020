#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[2*n];
        int mx = INT_MIN;
        vector<int> ind , len;
        for(int i = 0 ; i<2*n ; i++){
            cin>>p[i];
            if(p[i] > mx){
                mx = p[i];
                ind.push_back(i+1);
            }
        }
        ind.push_back(2*n +1);
        for(int i = 1 ; i<(int) ind.size() ; i++){
            len.push_back(ind[i]-ind[i-1]);
        }
        int k = len.size();
        int dp[k+1][n+1];
        for(int i = 0 ; i<=k ;i++) dp[i][0] = 1;
        for(int j = 1 ; j<=n ;j++) dp[0][j] = 0;
        for(int i = 1 ; i<=k ; i++){
            for(int j = 1; j<=n ; j++){
                if(len[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-len[i-1]];
                }
            }
        }
        cout<<(dp[k][n] ? "YES":"NO")<<"\n";
    }
}