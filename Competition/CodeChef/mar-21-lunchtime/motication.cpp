#include<bits/stdc++.h>
#define ll long long int 
#define pill pair< int , ll >

using namespace std;

#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int t ;
    cin>>t;
    while(t--){
        int n , x ;
        cin>>n>>x;
        int temp_size , temp_rating , max_rating = INT_MIN , max_size = 0;
        for(int i = 0 ; i<n ; i++){
            cin>>temp_size>>temp_rating;
            if(temp_size<=x && temp_rating > max_rating){
                max_rating = temp_rating;
                max_size = temp_size;
            }
        }
        cout<<max_rating<<"\n";
        // cout<<max_size<<"\n";
    }
}