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


void solve(){
    char a[N];
    int i = 0;
    // cin>>a[i++];
    do{
        cin>>a[i++];
    }while( cin.peek() != '\n' );
    cout<<a;
}


int32_t main()
{
    IOS;
    ll t;
    cin>>t;
    fflush(stdin);
    while(t--){
        solve();
    }
    return 0;
}