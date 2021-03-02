#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m , x , y;
    cin>>n>>m>>x>>y;
    cout<<x<<" "<<y<<"\n";
    if(x%2 == 0){
        for(int j=y-1; j>0; j--) cout<<x<<" "<<j<<"\n";
        for(int j=y+1; j<=m;j++) cout<<x<<" "<<j<<"\n";
    }else
    {
        for(int j=y+1; j<=m;j++) cout<<x<<" "<<j<<"\n";
        for(int j = y-1; j>0; j--) cout<<x<<" "<<j<<"\n";
    }
    
    for(int i = x-1 ; i>0 ; i--){
            if(i%2==0){
                for(int j= 1 ; j<=m ; j++) cout<<i<<" "<<j<<"\n";
            }
            if(i%2==1){
                for(int j= m ; j>0 ; j--) cout<<i<<" "<<j<<"\n";
            }
    }
    for(int i = x+1;i<=n ; i++){
        if(i%2==0){
                
                for(int j= m ; j>0 ; j--) cout<<i<<" "<<j<<"\n";
            }
            if(i%2==1){
                for(int j= 1 ; j<=m ; j++) cout<<i<<" "<<j<<"\n";
            }
    }
}