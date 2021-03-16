#include<bits/stdc++.h>

#define ll long long int 
#define pill pair< int , ll >

using namespace std;

#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int n ; ll x;
    cin>>n>>x;
    ll arr[n];
    for(int i = 0 ; i<n ; i++) cin>>arr[i]; 

    int lf = 0 , rt = 0 , ans = 0; ll sum = arr[0];
    while(rt < n){
        if(sum < x){
            if(rt < (n-1)) sum+=arr[++rt];
            else rt++;
        }
        else if (sum > x){
            if(lf == rt){
                if (rt < n-1){
                    sum = arr[++rt];
                    ++lf;
                }
                else rt++;
            }
            else{
                sum-=arr[lf++];
            }
        }
        else{
            ans+=1;
            if(rt < n-1){
                sum+=arr[++rt];
                sum-=arr[lf++];
            }
            else rt++;
        }
    }  

    cout<<ans<<"\n";
}