#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3;
        cin>>s1>>s2>>s3;
        int sol = 4*(sqrt((s1*s2)/s3) + sqrt((s3*s2)/s1) + sqrt((s1*s3)/s2));
        cout<<sol<<"\n";
    }
    return 0;
}