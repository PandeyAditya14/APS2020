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

        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i< n ; i++) cin>>arr[i];
        bool addi = true , addj = true;
        int count = 0 ;
        int i  =0 ,j = n-1;
        bool flag = true;
        for(int i = 0 ; i<n ; i++){
            if(arr[i]!=i+1){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<0<<"\n";
        }
        else{
            for( i ,j; i<n/2 && j >= n/2 ; i++  , j--){
                count+=(arr[i] == (i+1))&&(addi);
                count+=(arr[j] == (j+1))&&(addj);
                addj=!(arr[j] == (j+1));
                addi=!(arr[i] == (i+1));
            }
            count+=(arr[j] == (j+1))&&(addj);
            count = max(count,1);
            cout<<min(count,2)<<"\n";
        }

    }
    
    
    return 0;
}