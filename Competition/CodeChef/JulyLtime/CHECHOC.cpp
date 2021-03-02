#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        ll pro = n*m;
        ll tot;
        if(pro%2 == 0){
            tot = (pro/2)*(min(y,2*x));
        }
        else{
            tot = (pro/2)*(min(y,2*x)) + min(x,y);
        }
        cout<<tot<<"\n";
    }
}