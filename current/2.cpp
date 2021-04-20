#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
    
    int t ;
    cin>>t;
    while(t--){
        int n , m , k;
        cin>>n>>m>>k;

        int ans=0;

        double input[n+1][m+1] , cummalative[n+1][m+1];
        
        for(int i = 0 ; i<=n ; i++) cummalative[i][0] = 0;
        for(int j = 0 ; j<=n ; j++) cummalative[0][j] = 0;
        
        for(int i = 1 ; i<= n ; i++){
            for(int j = 1 ; j<=m ; j++){
                cin>>input[i][j];
                cummalative[i][j]=input[i][j]+cummalative[i][j-1];
            }
            for(int j = 1 ; j<=m ;j++) cummalative[i][j]+=cummalative[i-1][j];
        }

        int min_dimension = min(n,m);
        
        for(int el_o = 1 ; el_o<=min_dimension ; el_o++){
            for(int i = el_o ; i <= n ; i++){
                for(int j = el_o ; j <= m ; j++){
                    if((cummalative[i][j]+cummalative[i-el_o][j-el_o]-cummalative[i][j-el_o]-cummalative[i-el_o][j])/(el_o*el_o)>=k){
                        ans+=1;
                    }
                }
            }
        }

        cout<<ans<<"\n";
        
    }

}