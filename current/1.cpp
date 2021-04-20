#include<bits/stdc++.h>

using namespace std;

int reminder[4] = {16,32,44,55};
int discrte[4] = {20 , 36 , 51 , 60} ;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if (n <= 4) cout<< discrte[n-1]<<"\n";
        else cout<< ((44*(n/4LL) )+ (long long)reminder[n%4]) <<"\n";
    }
}