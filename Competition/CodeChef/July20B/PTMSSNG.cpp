#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int x=0 , y=0, curr_x , curr_y; 
        ll n;
        cin>>n;
        n=n*4 -1;
        while(n--){
            cin>>curr_x>>curr_y;
            x^=curr_x;
            y^=curr_y;
        }
        cout<<x<<" "<<y<<"\n";
    }   

    return 0;
}