#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        ll c=0;
        cin>>n>>m>>k;
        double l[n+1][m+1];
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                if(i==0 || j==0)
                {
                    l[i][j]=0;
                }
                else
                {
                    cin>>l[i][j];
                }
            }
        }
        for(ll i=0;i<=n;i++){
            double s=0;
            for(ll j=0;j<=m;j++){
                l[i][j]+=s;
                s=l[i][j];
            }
        }
        for(ll j=0;j<=m;j++){
            double s=0;
            for(ll i=0;i<=n;i++){
                l[i][j]+=s;
                s=l[i][j];
            }
        }
        for(int i = 0 ; i<=n ; i++){
            for(int j = 0 ; j<=m ; j++){
                cout<<l[i][j]<<"\t";
            }
            cout<<"\n";
        }
        ll u=min(n,m);
        for(ll v=1;v<=u;v++){
            for(ll i=v;i<=n;i++){
                for(ll j=v;j<=m;j++){
                    if((l[i][j]+l[i-v][j-v]-l[i][j-v]-l[i-v][j])/(v*v)>=k){
                        c+=1;
                    }
                }
            }
            
        }
        cout<<c<<"\n";
    }
}
