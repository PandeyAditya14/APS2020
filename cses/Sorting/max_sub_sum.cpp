#include <bits/stdc++.h>

using namespace std ;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){

    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i = 0 ; i<n ; i++)cin>>arr[i];
    
    long long int max_curr = arr[0] , max_ans = arr[0];
    for(int i = 1 ;i<n ; i++){
        max_curr = max((long long int)arr[i] , max_curr + arr[i]);
        max_ans = max(max_ans,max_curr);
    }
    cout<<max_ans;

    return 0;
}