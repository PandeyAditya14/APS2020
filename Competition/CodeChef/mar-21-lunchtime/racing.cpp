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
        ll x , r , m , a;
        cin>>x>>r>>m;
        r*=60;
        m*=60;
        a = r - x; // direct full energy
        a*=2; //2 sec for every subsequent seconds
        a+=x; // total time taken
        if( a <= m ) cout<< "YES\n";
        else cout<<"NO\n";
    }
}