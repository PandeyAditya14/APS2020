#include <bits/stdc++.h>
using namespace std;
#define iii pair<int,pair<int,int>>
#define ii pair<int,int>

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        map<int,pair<int,int>> grid;
        int arr[n][m];
        for(int i = 0 ; i< n ; i++){
            for (int j = 0;j<m ; j++){
                cin>>arr[i][j];
                if(arr[i][j]) grid.insert(iii(arr[i][j],ii(i,j)));
            }
        }


        bool flag = true;
        for(auto node : grid){
            int k = node.first , x = node.second.first , y = node.second.second;
            if(k> min(min(x,n-1-x),1) + min(min(y,m-1-y),1) + 2){
                flag = false;
                break;
            }
            if(x-1 >= 0  && k){
                arr[x-1][y] +=1;
                k--;
            }
            if(x+1 < n  && k){
                arr[x+1][y] +=1;
                k--;
            }
            if(y-1 >= 0  && k){
                arr[x][y-1] +=1;
                k--;
            }
            if(y+1<n && k){
                arr[x][y+1] +=1;
                k--;
            }

        }
        if(!flag)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i = 0 ; i<n ; i++){
                for(int j = 0 ; j<m ;j++)
                    cout<<arr[i][j]<<" ";

                cout<<"\n";
            }
        }

    }
}