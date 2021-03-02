#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,z;
        cin>>n>>k>>z;
        int arr[n];
        int ans=0;
        for(int i = 0 ; i<n ; i++) cin>>arr[i];
        for(int m = 0 ; m<= z ; m++){
            int pos = k-2*m;
            if(pos<0) continue;
            int s=0 , mx =0;
            for(int i = 0 ; i<= pos ; i++){
                if(i<(n-1)) mx = max(mx,arr[i]+arr[i+1]);
                s+=arr[i];
            }
            ans=max(ans,s+m*mx);
        }
        cout<<ans<<"\n";
    }
}