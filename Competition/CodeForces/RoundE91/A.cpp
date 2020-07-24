#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int left = INT_MAX , mid=-1 , right = -1;
        int indL , indR , indM;
        for(int i = 0 , j =1 ;i<n ; i++ , j++){
            int curr;
            cin>>curr;
            if(mid == -1){
                if(left>curr)
                {
                    left = curr;
                    indL  = j;
                }
                else if(left<curr){
                    mid = curr;
                    indM = j;
                }
            }
            else if (right == -1) {
                if(mid>curr){
                    right = curr;
                    indR = j;
                }
                else if(mid<curr){
                    mid = curr;
                    indM = j;
                }
                    
            }
        }
        if(right == -1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n"<<indL<<" "<<indM<<" "<<indR<<" \n";  
        }

    }
    
}