#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mp make_pair

int main(){
    fast_cin();
    int n , x ;
    cin>>n>>x;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++) cin>>arr[i];

    map<int , int> umap;
    for(int i = 0 ; i<n ; i++){
        if(umap.count(x - arr[i])){
            cout<<i+1<<" "<<umap[x-arr[i]];
            return 0;
        }
        umap[arr[i]]=i+1;
    }

    cout<<"IMPOSSIBLE";
}