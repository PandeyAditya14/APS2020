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
        float U, V , a ,S;
        cin>>U>>V>>a>>S;
        float result_v = ( (U*U) - ( 2*a*S ) );
        result_v = max(0.0f,sqrt(result_v));
        if(result_v <= V){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        } 
    }
}