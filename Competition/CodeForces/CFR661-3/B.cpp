#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n],b[n],minA=LONG_LONG_MAX,minB=LONG_LONG_MAX;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            if(a[i]<minA) minA=a[i];
        }
        for(int i = 0; i<n; i++){
            cin>>b[i];
            if(b[i]<minB) minB=b[i];
        }
        ll tot=0;
        for(int i= 0; i<n ; i++)
        {
            tot+=max(a[i]-minA , b[i]-minB);
        } 
        cout<<tot<<"\n";
    }
}