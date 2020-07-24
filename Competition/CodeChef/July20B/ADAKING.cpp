#include <bits/stdc++.h>
using namespace std;
using vi = vector <int> ;
using ll = long long;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl 


const int N=1e5+5;

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        for(int i = 0 ;i<8 ; i++){
            for(int j = 0 ; j<8 ; j++){
                if(i==0 && j ==0)
                    cout<<'O';
                else if(k>1){
                    cout<<'.';
                    k--;
                }
                else
                    cout<<"X";
            }
            cout<<"\n";
        }
    }

    return 0;
}
