/**
 * @ Author: Aditya Kumar Pandey
 * @ Create Time: 2020-03-28 15:53:21
 * @ Description: To count the minimum number of coins to reach an amount with a set of given denominations 
 *                -> Time complexity - O(coins.size * total)
 *                -> Space complexity - O(coins.size * total)
 * @ Link:https://www.youtube.com/watch?v=Y0ZqKpToTic
 */

#include <bits/stdc++.h>
using namespace std;

int change(int C[] , int n , int m){ // n is size of C[] m is target number
    int **coins  = new int*[n];
    for (int i = 0; i<n ;i++) coins[i] = new int[m+1];
    for (int i = 0 ; i<n ;i++){
        coins[i][0]=0;
        for(int j = 1;j<=m;j++){
            if (i == 0){
                if(C[i]<= j ) 
                    coins[i][j]=1+coins[i][j-C[i]];
                else
                    coins[i][j]=0;
            }
            else if(C[i]<= j )
                coins[i][j] = min(coins[i-1][j],1+coins[i][j-C[i]]);
            else 
                coins[i][j]=coins[i-1][j];     
        }
    }
    return coins[n-1][m];
}

int main(){
    int arr[] = {1, 2, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int m = 4; 
    cout << change(arr, n, m); 
    return 0;
}