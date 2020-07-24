#include <bits/stdc++.h>
using namespace std;
using vi = vector <int> ;
using ll = long long;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define int long long int


// const int N=1e5+5;

int digCount(int x){
    int sum = x % 10;
    while ((x /= 10) != 0)
        sum += x % 10;
    return sum;
}

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n , morty  = 0 , chef = 0 ;
        cin>>n;
        for(int i = 0 ; i<n ; i++){
            int ch1 , mo1;
            cin>>ch1>>mo1;
            int ch = digCount(ch1);
            int mo = digCount(mo1);
            if(ch == mo){
                chef++;
                morty++;
            }
            else if(ch<mo)
                morty++;
            else
                chef++;
        }
        if(chef > morty){
            cout<<"0 "<<chef<<"\n";
        }
        else if(chef < morty){
            cout<<"1 "<<morty<<"\n";
        }
        else{
            cout<<"2 "<<chef<<"\n";
        }

    }
    return 0;
}