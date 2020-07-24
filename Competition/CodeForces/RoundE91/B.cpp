#include<bits/stdc++.h>
using namespace std;
#define ci pair<char,int>
#define ic pair<int , char>

int main(){
    unordered_map<char,char> key = {
        {'R','P'},
        {'P','S'},
        {'S','R'}
    };
    int n;
    cin>>n;
    while(n--){
        string st;
        map<char,int> in_map;
        map<int,char> ans_map;
        cin>>st;
        for (int i = 0 ;i<st.size() ; i++) in_map[st[i]]+=1;
        for(auto x : in_map) ans_map.insert(ic(x.second,x.first));
        auto ans_ptr = ans_map.rbegin();
        string ans(st.size(),key[ans_ptr->second]);
        cout<<ans<<"\n";
    }
}