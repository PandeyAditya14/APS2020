#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();
}