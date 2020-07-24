#include <bits/stdc++.h>
using namespace std;
using vi = vector <int> ;
using ll = long long;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl 
const int N=1e5+5;

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        string inp;
        cin>>inp;
        int q;
        cin>>q;
        while(q--){
            int ind;
            cin>>ind;
            unordered_map<char,int> mp;
            mp['('] = 0;
            mp[')'] = 0;
            unordered_map<char,char> key;
            key[')'] = '(';
            key['('] = ')';

            int i;
            for (i = ind -1 ; i<inp.size() ; i++){
                if(inp[i] == ')' && ( mp[')'] == mp['('] )) continue;
                mp[inp[i]]++;
                if(mp[inp[i]] ==  mp[key[inp[i]]]) break;
            }
            if(i == inp.size()) cout<<"-1\n";
            else cout<<i+1<<"\n";
        }
    }
    return 0;
}