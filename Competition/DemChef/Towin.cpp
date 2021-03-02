#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll ai=0 , prev = 0;
        bool eq = true;
        for(int i = 0 ; i<n ; i++){
            prev = ai;
            cin>>ai;
            if(i==0) continue;
            if(ai != prev) eq = false;
        }
        if((n%2 == 0 )&& eq) cout<<"draw\n";
        else cout<<"second\n";
    }
}