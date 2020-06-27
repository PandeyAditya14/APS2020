#include <bits/stdc++.h>
using namespace std;
using vi = vector <int> ;
using ll = long long;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl 

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)((x).size())
#define fill(x, y) memset(x, y, sizeof(y))
#define all(x) (x).begin(), (x).end()
#define trace(x)  for (auto itr : x)
#define rep(i, n) for (auto i = 0; i < n; ++i)
#define repi(i, x, n) for (auto i = x; i <= n; ++i)



const int N=1e5+5;

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n , b_size , m;
        cin>>n>>b_size>>m;
        int lend = 0; 
        int rend = b_size -1 ;
        int count=0;
        int block_num = 0;
        while(m--){
            int x;
            cin>>x;
            if(x<lend || x>rend){
                block_num  = int(n/x);
                ++count;
                lend=block_num*b_size;
                rend=min(n-1 , lend + b_size -1);
            }
            
        }
        cout<<count<<"\n";
        
    }
    return 0;
}