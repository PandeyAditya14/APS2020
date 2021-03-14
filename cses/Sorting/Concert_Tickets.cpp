#include <bits/stdc++.h>
/**
 * @brief This code uses MultiSet to optimize the lower_bound function 
 *        that was required to find the best available options the logic
 *        more or remains same as the Concert_Tickets_TLE.cpp but the implementation
 *        uses multiset to pre-sort the elements (using Binary tree)
 * 
 */
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
}
int main()
{
    fast_cin();
    int  n, m;
    cin>>n>>m;
    multiset<int,greater<int>> tickets;
    for(int i =0 ; i< n ; i++){
        int temp;
        cin>>temp;
        tickets.insert(temp);      
    }
    while(m--){
        int curr;
        cin>>curr;
        auto it = tickets.lower_bound(curr);
        if(it == tickets.end()) cout<<"-1\n";
        else{
            cout<<*it<<"\n";
            tickets.erase(it);
        }
    }
    return 0;
}