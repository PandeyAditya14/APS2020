#include <bits/stdc++.h>
using namespace std;


#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while (t--)
    {
        int n , curr ;
        cin>>n;
        bool flag = false;
        for (int i = 0 ; i<n ; i++){
            cin>>curr;
            if(flag)
                continue;
            if(curr % 2 ==0)
                flag = true;
        }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
    }
    

    return 0;
}