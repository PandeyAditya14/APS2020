#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<ll> arr(n);
        ll moves = 0;
        for(int i = 0; i< n ; i++){
            cin>>arr[i];
            if( i == 0){
                moves+=arr[i];
                continue;
            }
            moves+= max(0LL , arr[i] - arr[i-1] - 1) + 1;
        }
        cout<<moves<<"\n";
    }
}