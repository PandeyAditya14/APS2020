#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll l,r,m;
        cin>>l>>r>>m;
        if(l == r)
            cout<<l<<" "<<l<<" "<<l<<"\n";
        else{
            for (int i = l ; i<= r ;i++){
                if(m%i == 0){
                    cout<<i<<" "<<i<<" "<<i<<"\n";
                    break;
                }
                else if(m%i != 0 ){
                    if(m<i){
                        cout<<i<<" "<< i<<" "<<i+m%i <<"\n";
                    }
                    else{
                        cout<<i<<" "<< i+m%i <<" "<<i<<"\n";
                    }
                   
                    break;
                }   
                
            }
        }
    }


         
}