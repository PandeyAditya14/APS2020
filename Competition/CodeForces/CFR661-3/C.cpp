#include<bits/stdc++.h>
using namespace std;
using ii=pair<int,int>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        map<int,int> first ;
        multimap<int,int>ans;
        map<int,vector<bool>>Validloc;
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i<n ; i++) cin>>arr[i];
        if(n==1){
            cout<<"0\n";
            continue;
            
        }
        for(int i = 0 ; i<n-1; i++){
            for(int j=i+1 ; j<n; j++){
                int sum=arr[i]+arr[j];
                auto it=first.find(sum);
                if(it == first.end()){
                    vector<bool> locs(n,true);
                    locs[i]=false;
                    locs[j]=false;
                    Validloc.insert({sum,locs});
                    first[sum]+=1;
                }
                else{
                    if(Validloc[sum][i]&&Validloc[sum][j]){
                        Validloc[sum][i]=false;
                        Validloc[sum][j]=false;
                        first[sum]+=1;
                    }
                }

            }
        }
        for(auto x:first){
            ans.insert(ii(x.second,x.first));
        }
        cout<<ans.rbegin()->first<<"\n";
    }
}