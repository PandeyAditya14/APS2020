#include<bits/stdc++.h>
using namespace std;
using ci=pair<char,int>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , seq= 0;
        cin>>n;
        string str;
        cin>>str;
        map<char,vector<int>> mp;
        mp['0']={};
        mp['1']={};
        int arr[n];
        for(int i = 0 ; i<n ; i++){
                char ch=str[i];
                if(mp[ch].empty()){
                    seq++;
                    arr[i]= seq;
                    mp['0' + !(ch - '0')].push_back(seq);
                }
                else{
                    int cur = mp[ch].back();
                    arr[i] = cur;
                    mp[ch].pop_back();
                    mp['0' + !(ch - '0')].push_back(cur);
                }
        }
        cout<<seq<<"\n";
        for(int i = 0 ; i<n ; i++) cout<<arr[i]<<" ";
        cout<<"\n";

    }
}