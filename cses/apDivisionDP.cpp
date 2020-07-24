/**
 * @file apDivisionDP.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief The DP solution for the CSES problem Apple Division
 * @version 0.1
 * @date 2020-06-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

ll findMinRec(vector<ll> arr , ll sum_total , ll sum_calc ,int i){
    if(i == 0)
        return abs( sum_total - 2*sum_calc);
    else
        return(min(findMinRec(arr , sum_total , sum_calc + arr[i],i-1),
                findMinRec(arr , sum_total , sum_calc,i-1)));
    
}
ll findMin(vector<ll> arr , ll sum_arr){
    int n = arr.size();
    bool** dp = new bool*[n+1];
    for(int i = 0; i <= n; ++i)
    dp[i] = new bool[sum_arr+1];
    
    for(int i = 0 ; i<=n; i++ )
        dp[i][0] = true;
    for(int i = 1 ; i<=sum_arr ; i++)
        dp[0][i] =false;
    
    for(int i = 1; i<=n ; i++){
        for(int j = 1;j<=sum_arr;j++){
            dp[i][j] = dp[i-1][j];
            if(arr[i-1]<=j)
                dp[i][j] |= dp[i-1][j-arr[i-1]];
        }
    }

    ll diff=sum_arr/2;
    for(int j = sum_arr/2 ; j>=0 ; j--){
        if(dp[n][j] == true){   
            diff=sum_arr-2*j;
            break;
        }
    }
    return diff;
}
int main(){
    int n;
    IOS;
    cin>>n;
    ll sum_arr = 0;
    vector<ll> arr(n);
    while(n--){
        ll tmp;
        cin>>tmp;
        arr.push_back(tmp);
        sum_arr+=tmp;
    }
    cout<<findMin(arr,sum_arr);
    // cout<<findMinRec(arr,sum_arr,0,arr.size()-1);
    return 0;
}   