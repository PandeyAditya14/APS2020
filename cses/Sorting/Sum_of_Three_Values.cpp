#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define plli pair<ll,int>
#define mp make_pair
// using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main(){
    fast_cin();
    int n;
    ll x;
    cin>>n>>x;
    vector<plli> arr(n);
    for(int i = 0 ; i < n ; i++ ){
        ll temp;
        cin>>temp;
        arr[i] = mp(temp,i);
    }
    sort(arr.begin() , arr.end());
    for(int i = 0 ; i < n ; i++){
        ll x_temp = x-arr[i].first;
        int lf = 0 , rt = n-1;
        while(lf != rt){
            if( lf != i && rt != i && x_temp == ( arr[lf].first + arr[rt].first ) ){
                cout<<arr[lf].second+1<<" "<<arr[i].second+1<<" "<<arr[rt].second+1<<"\n";
                return 0;
            }
            else if(x_temp < (arr[lf].first + arr[rt].first)) rt--;
            else lf++;
        } 
    }

    cout<<"IMPOSSIBLE\n";


    return 0;
}