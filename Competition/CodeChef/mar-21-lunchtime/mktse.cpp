#include<bits/stdc++.h>
#define ll long long int 
#define pill pair< int , ll >

using namespace std;

#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int t;
    cin>>t ;
    while(t--){
        int n;
        cin>>n;
        int no_odd = 0 , no_2 = 0;
        for(int i = 0 ; i < n ; i++){
            ll temp;
            cin>>temp;
            if(temp == 2LL) no_2++;
            else if(temp%2LL == 1) no_odd++;
        }
        if(no_odd%2 == 0){
            cout<<"0\n";
        }
        else{
            if(no_2 > 0) cout<<"1\n";
            else cout<<"-1\n";
        }
    }
}