#include <bits/stdc++.h>
using namespace std;
using vi = vector <int> ;
using ll = unsigned long long int ;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        unsigned int n , k;
        cin>>n>>k;
        ll val = 0;
        bool fg = false;
        for(int i = 1 ; i<= n ; i++){
            unsigned int temp;
            cin>>temp;
            val+= temp;
            if(k>val && !fg){
                cout<<i<<"\n";
                fg = true;
            }
            val = max(0ULL,val-k);
        }
        if(!fg){
            cout<<n+val/k + 1<<"\n";
        }
    }
    return 0;
}