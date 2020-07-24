#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n ;i++) cin>>arr[i];
        if(arr[0] < arr[1] ) {
           int i = 0;
           while(arr[i] < arr[i+1]){
                if(arr[i] < 0)
                    arr[i]*=-1;
                else
                    arr[i+1] *=-1;                
            }
        }
        for(int i = 2 ; i< n - 1 ; i++){
            if(i%2 != 0)
                continue;
            while(arr[i] < arr[i-1]){
                if(arr[i] < 0)
                    arr[i]*=-1;
                else
                    arr[i-1] *=-1;                
            }
            while(arr[i] < arr[i+1]){
                if(arr[i] < 0)
                    arr[i]*=-1;
                else
                    arr[i+1] *=-1;                
            }
        }
        if(n%2 != 0){
            int i = n-1;
             while(arr[i] < arr[i-1]){
                if(arr[i] < 0)
                    arr[i]*=-1;
                else
                    arr[i-1] *=-1;                
            }
        }
        for(int i = 0 ; i<n ; i++) cout<<arr[i]<<" ";
        cout<<"\n";
    }
}