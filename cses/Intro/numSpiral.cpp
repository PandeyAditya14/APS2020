/**
 * @file numSpiral.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is solution to cses quetion number spiral https://cses.fi/problemset/task/1071/
 * @version 0.1
 * @date 2020-06-19
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <bits/stdc++.h>
#define int long long
using namespace std;

int sqandsub(int x , int y ){
    return (x*x) - (y-1);
}
int32_t main(){
    int n;
    cin>>n;
    while(n--){
        int x,y,ans;
        cin>>x>>y;
        if(x==y){
            ans = sqandsub(x,y);
        }
        else if (x>y){
            if(!(x & 1)){                   // is x even ?? 
                ans = sqandsub(x,y);
            }
            else{                           // if x is not even 
                ans = (x-1)*(x-1) + y;
            }

        }
        else{                               // y >x
            if(!(y & 1)){                   // is y even ??
                ans  =((y-1)*(y-1))+x;
            }
            else{                           // if y is odd
                ans = sqandsub(y,x);
            }
        
        }
        cout<<ans<<"\n";
    }
    return 0;
}