#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sz = s.size();
        int ans = 0;
        for(int i = 0 ; i <10 ; i++){
            for(int j = 0 ;  j<10 ; j++){
                int res = 0;
                int x = i , y =j;
                for(auto c: s){
                    if(c-'0' == x){
                        res++;
                        swap(x,y);
                    }
                }
                if(x!=y && res%2==1) --res;
                ans=max(ans,res);
            }
        }
        cout<<sz-ans<<"\n";
    }
}