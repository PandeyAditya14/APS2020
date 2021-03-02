#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , k ,l;
        cin>>n>>k>>l;
        vector<int> safe;
        vector<int> d(n+1);
        safe.push_back(0);
        for(int i = 1 ; i<=n ; i++){
            cin>>d[i];
            if(d[i] + k <= l) safe.push_back(i);
        }
        safe.push_back(n+1);
        bool ok = true;
        for(int i = 1 ; i<safe.size() && ok; i++){
            int tide = k  ; bool down = true;
            for(int j = safe[i-1]+1 ; j<safe[i] ; j++){
                tide += (down?-1:1);
                if(down) tide-=  max(0,d[j] + tide -l);
                if(tide < 0 || d[j] + tide > l){ok = false ; break; }
                if(tide == 0) down = false;
            }
            
        }
        cout<<(ok?"YES":"NO")<<"\n";
    }
}