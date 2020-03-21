#include<bits/stdc++.h>

using namespace std;
#define int long long
inline bool getParity(unsigned int n)  // for faster context switching when the function is called
{ 
    bool parity = 0; 
    while (n) 
    { 
        parity = !parity; 
        n     = n & (n - 1); 
    }      
    return parity; 
} // returns 1 for odd and 0 for even

int32_t main() // as int is defined as long long we need this
{
    ios_base::sync_with_stdio(false); // some shit for faster io
    cin.tie(NULL);   // ditto
    cout.tie(NULL); // ditto
    int t;
    cin>>t;
    while(t--){
        int even_count = 0 , odd_count = 0;
        int n , q;
        cin>>n>>q;
        int x;
        for (int i = 0  ; i< n ; i++){
            cin>>x;
            getParity(x)? odd_count+=1: even_count+=1;
            // cout<<i<<". "<<odd_count<<"\t"<<even_count<<"\n";
        }
        for(int i = 0 ; i<q ; i++){
            cin>>x; 
            if(getParity(x)){
                cout<<odd_count<<" "<<even_count<<"\n";
            }
            else{
                cout<<even_count<<" "<<odd_count<<"\n";
            }
        }
    }
    return 0;
}