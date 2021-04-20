#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    while(t--){
        int n , x;
        cin>>n>>x;
        set<int> arr;
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            arr.insert(temp);
        }
        cout<<min(n-x , (int)arr.size())<<"\n";
    }
}