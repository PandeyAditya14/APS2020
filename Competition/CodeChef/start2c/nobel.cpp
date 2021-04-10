#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    int t;
    cin>>t;
    while(t--){
        set<int> topics;
        int n , m; //n-> no of researcher and m field
        cin>>n>>m;
        vector<bool> occured(m+1,false);
        if(n<m){
            for(int i = 0 ; i< n; i ++){
                int tem;
                cin>>tem;
            }
            cout<<"YES\n";
            continue;
        }
        int no_of_subjects = m;
        for(int i =0 ; i < n ; i++){
            int tem;
            cin>>tem;
            if(!occured[tem]){
                occured[tem] = true;
                no_of_subjects--;
            }
        }
        if(no_of_subjects > 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}