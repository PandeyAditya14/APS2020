#include<bits/stdc++.h>
const int INF = std::numeric_limits<int>::max();
using namespace std;
int count_set_bits(int x){
    int n =0;
    while(x){
        n++;
        x=x&x-1;
    }
    return n;
}
int cost[3][3] = {{3,2,7},{5,1,3},{2,7,2}};
int dp(int n = 3){
    int siz = pow(2,n);
    int dp[siz];
    fill_n(dp,9,INF);
    dp[0] =0;
    for(int i = 0 ; i< 8 ;i++){
        cout<<dp[i]<<"\t";
    }
    
    for (int i = 0 ; i<siz;i++){
        for (int j = 0; j<n ; j++){
            int x = count_set_bits(i);
            if( (i&(1<<j)) == 0){
                int temp = i|(1<<j);
                dp[temp] = min(dp[temp],0+cost[x][j]);
            }
        }
    }
    return dp[siz-1];
}
int main(){
    // cout<<count_set_bits(7);
    cout<<dp(3);
}