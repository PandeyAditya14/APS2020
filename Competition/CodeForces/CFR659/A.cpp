#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s(200,'a');
        cout<<s<<"\n";
        for(int i = 0 ; i<n ; i++){
            int l;
            cin>>l;
            s[l] = 'a' + !(s[l] - 'a');
            cout<<s<<"\n";
        }
    }
}