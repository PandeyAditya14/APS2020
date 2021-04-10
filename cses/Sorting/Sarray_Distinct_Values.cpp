#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define plli std::pair<ll,int>
#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int n , k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(int i = 0 ; i<n ; i++) cin>>arr[i];

    map<ll,int> count ; int num = 0 , left_index = 0 ; ll ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(count[arr[i]] == 0) num++;
        
        count[arr[i]]++;

        if(num > k){
            for( ; num > k ; left_index++){
                count[arr[left_index]]--;
                if(count[arr[left_index]] == 0) num--;
            }
        }
        ans+= i - left_index + 1; // all the subarrays in the remain places such as from index 0 2 sub arrays will be [0],[0,1],[0,1,2],[1],[1,2] and [2] 
                                  // so when index increases from 1 to 2 three new subarrays are added [0,1,2] , [1,2] , [2]
                                  // everey index startin from left index to index i so i - left_index + 1
    }
    cout<<ans<<"\n";



}