#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int x = max(1,n/2);
        cout<<x<<"\n";
        if (n%2 == 0){
            int i =1;
            while(i<=n){
                cout<<2<<" "<<i<<" "<<++i<<"\n";
                ++i;
            }
        }
        else{
            if(n>1){
            int i = 1;
            cout<<3<<" "<<i<<" "<<++i<<" "<<n<<"\n";
            i++;
            while(i<n-1){
                cout<<2<<" "<<i<<" "<<++i<<"\n";
                ++i;
            }
            }
            else{
                cout<<"1 1"<<"\n";
            }
        }
    }
    return 0;

}