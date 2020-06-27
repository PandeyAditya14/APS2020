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

float det(int a[2][2]){
    return a[0][0]*a[1][1] - a[0][1]*a[1][0];
}

void solve(int a[3]  , int b[3] , int max_move, int ign){
    int d[2][2] = {{a[0],a[1]},
             {1,1}};
    int dX[2][2] = {{b[0],b[1]},
             {1,1}};
    int dY[2][2] = {{a[0],a[1]},{b[0],b[1]}};

    if(max_move == 2){
        if(ign == 0){
            d[0][0] = a[2];
            dX[0][0] = b[2];
            dY[0][0] = a[2];
            dY[1][0] = b[2];
        }
        else if(ign == 1){
            d[0][1] = a[2];
            dX[0][1] = b[2];
            dY[0][1] = a[2];
            dY[1][1] = b[2];
        }
    }

    float X = det(dX) / det(d);
    float Y = det(dY) / det(d);
    cout<<X<<"\t"<<Y<<"\n";
    // cout<<"HERE";
    if ((roundf(X) == X) && (roundf(Y)==Y)){
        int ans = 1;
        if (X != 1 && Y!=0)
            ans++;
        if(max_move == 2){
            cout<<ans;
        }
            
        else if ((a[2]*X + Y) == b[2]){
            cout<<ans;
        }
            
        else{
            cout<<3;
        }
            
        }
    else{
        cout<<max_move;
    }


}

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    int old[3] , transfomed[3];
    while(t--){
        int max_move=3;
        int ign = -1;
        rep(i,3) cin>>old[i];
        rep(i,3) cin>>transfomed[i];
        rep(i,3){
            if (old[i] == transfomed[i])
                {
                    if (max_move == 3)
                        ign = i;
                    --max_move;
                }
        }
        if (max_move<=1)
            cout<<max_move;
        else
            solve(old , transfomed , max_move, ign);

        cout<<"\n";        
    }
    return 0;
}   