#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef long long int lli;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mp make_pair

int main(){
    int n ;
    cin>>n;
    int *arr = new int[n];
    lli total=0;
    for(int i = 0 ; i<n ; i ++)cin>>arr[i];
    sort(arr , arr+ n );
    lli ans = 0;
    for(int i = 0 ; i<n ; i++) ans+=abs(arr[i] - arr[n/2]);
    cout<<ans;
}