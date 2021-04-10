#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main(){
    fast_cin();
    int t;
    cin>>t;
    while(t--){
        double nodes , servers;
        cin>>nodes>>servers;
        double max_distance = floor(nodes/servers);
        double max_pair = ceil(nodes/servers);
        cout<<(int) max_distance<<" "<<(int) max_pair;
    }
}