#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        int a[n] , b[m];
        for(int i = 0 ; i<n ; i++) cin>>a[i];
        for(int i = 0 ; i<m ; i++) cin>>b[i];
        bool flag = false;
        int i;
        sort(a,a+n);
        sort(b,b+m);
        for( i= 0 ; i<m ;i++){
            if(binary_search(a,a+n,b[i])){
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES\n"<<"1 "<<b[i]<<"\n";
        else cout<<"NO\n";
    }
}