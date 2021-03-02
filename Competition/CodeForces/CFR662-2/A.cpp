#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2 == 0){
            cout<<2+((n/2)-1);
        }
        else{
            cout<<2+(n-3)/2;
        }
        cout<<"\n";
    }

}