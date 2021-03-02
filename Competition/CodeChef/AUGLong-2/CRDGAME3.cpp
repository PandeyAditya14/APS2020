#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false) ; cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        float c,r;
        cin>>c>>r;
        int c1=ceil(c/9);
        int r1=ceil(r/9);
        cout<<( (c1<r1)?0:1 )<<' '<<( (c1<r1) ?c1:r1 )<< "\n";

    }
}