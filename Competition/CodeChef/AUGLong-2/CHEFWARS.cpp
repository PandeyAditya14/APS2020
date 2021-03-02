#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int d , x ,p=0;
        cin>>d>>x;
            while(x){
                p+=x;
                x>>=1;
            }    
            cout<< ((p>=d)? 1 :0) <<"\n";
        }
}