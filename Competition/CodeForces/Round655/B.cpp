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
    while(t--){
        ll n;
        cin>>n;
        if(n%2 == 0){
            cout<<n/2<<" "<<n/2<<"\n";
        }
        else{
            ll x = ceil(sqrt(n));
            for ( ll i = x ; i > 0; i--){
                if(n% i  == 0){
                    cout<<i<<" "<<n-i<<"\n";
                }
            }
        }
    }
    return 0;
}