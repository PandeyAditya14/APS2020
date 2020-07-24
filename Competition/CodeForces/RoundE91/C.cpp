#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , x;
        cin>>n>>x;
        vector<ll> arr(n);
        for(int i = 0; i<n ; i++) cin>>arr[i];
        sort(arr.begin(),arr.end(),greater<int>());
        int count=0 , team=0;
        for(auto it : arr){
            if(it*(++team) >= x)
            {
                count++;
                team = 0;
            }    
        }
        cout<<count<<"\n";
    }

}