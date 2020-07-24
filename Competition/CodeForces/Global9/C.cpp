#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ind1;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            if(arr[i] == 1)
                ind1 = i;
        } 
        if(ind1!= n-1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}