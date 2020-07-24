#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ind;
        ll arr[n];
        for(int i = 0 ; i<n ; i++)cin>>arr[i];
        for(ind = 0 ; ind<n ; ind++){
            if(arr[ind] > 1)
            {   
                ind++;
                break;
            }
        }
        if(ind%2 != 0) cout<<"First\n";
        else cout<<"Second\n";

    }
}