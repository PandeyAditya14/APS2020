#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n , r;
        cin>>n>>r;
        int  a[n] , b[n];
        for(int i = 0 ; i<n ; i++) cin>>a[i];
        for(int i = 0 ; i<n ; i++) cin>>b[i];

        priority_queue <int> pq;
        pq.push(b[0]);
        for(int i = 1 ; i<n ; i++){
            int ans = b[i] + max(0,(b[i-1] -(r * (a[i]-a[i-1]))));
            pq.push(ans);
        }
        cout<<pq.top()<<"\n";

    }
}