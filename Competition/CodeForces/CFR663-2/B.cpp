#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c = 0 , n , m;
        cin>>n>>m;
        for(int i = 0 ; i <n ; i++){
            for( int  j = 0 ; j <m ; j++){
                char temp ;
                cin>>temp;
                if(j<m-1 && i<n-1) continue;
                else if(j<m-1){
                    if(temp!='R') c++;
                }
                else if(i<n-1){
                    if(temp!='D') c++;
                }
                else{
                    cout<<c<<"\n";
                }
            }
        }
    }
}