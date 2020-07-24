#include <bits/stdc++.h> 
using namespace std; 
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long int

int binarySearch(int arr[], int l, int r, int x) 
{ 
    int m;
    while (l <= r) { 
        m = l + (r - l) / 2; 
        if (arr[m] == x) 
            return -1; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return  l; 
}

int32_t main()
{
    IOS;
    int32_t t;
    cin>>t;
    while(t--){
        int32_t n , q;
        cin>>n; 
        int arr[n];
        for(int32_t i = 0 ; i<n ; i++) cin>>arr[i];
        sort(arr,arr+n);
        cin>>q;
        while(q--){
            int x , y;
            cin>>x>>y;
            int32_t ans = binarySearch(arr,0,n-1,x+y);
            cout<<ans<<"\n";
        }
    }
}