#include <bits/stdc++.h>
using namespace std;
using vi = vector <int> ;
using ll = long long;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ii pair<int,int>

const int N=1e5+5;

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string st;
        cin>>st;
        unordered_map<char, int> chcount;
        for(int i =0 ; i<st.size() ; i++) chcount[st[i]]+=1;
        bool flag = true;
        for(auto it: chcount){
            if(it.second%2 != 0 ){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}