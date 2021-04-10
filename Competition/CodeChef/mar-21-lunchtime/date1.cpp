#include<bits/stdc++.h>
#define ll long long int 
#define pill pair< int , ll >

using namespace std;

#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    int t; 
    cin>>t;

    while(t--){
        ll a , y, x;
        cin>>a>>y>>x;
        if(a<y){
            cout<<(1)+(a)*(x) <<"\n";
        }else{
            cout<<(y)*(x)<<"\n";
        }
    }
}