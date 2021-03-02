#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        int ecnt = 0 , ocnt = 0 ,min_c = INT_MAX;
        bool equ = true;
        for(int i = 0 ; i< 4 ; i++){
            cin>>arr[i];
            min_c=min(min_c,arr[i]);
            if(!(arr[i] & 1)) ecnt++;
            else ocnt++;
            
            if(i>0 && (arr[i] != arr[i-1])) equ = false;
        }
        if(ecnt==3 && ocnt==1){
            cout<<"YES"<<"\n";
            continue;
        }
        else if(ecnt==1 && ocnt==3 && min_c>0){
            cout<<"YES"<<"\n";
            continue;
        }
        else if((ecnt==4 || ocnt ==4 ) && equ){
            cout<<"YES"<<"\n";
            continue;
        }
        cout<<"NO"<<"\n";
    }
}