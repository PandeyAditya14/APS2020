/**
 * @ Author: Aditya Kumar Pandey
 * @ Create Time: 2020-03-28 10:00:39
 * @ Description:   This is progrram is intended to demonstrate the DP to solve RodCutting Problem to maximise the profit in two ways
 *                  1. MeMoization in 1d 
 *                  2. 2D Table filling 
 *                  
 * @ Link: https://www.geeksforgeeks.org/cutting-a-rod-dp-13/
 *         https://www.youtube.com/watch?v=IRwVmTmN6go
 *         https://www.radford.edu/~nokie/classes/360/dp-rod-cutting.html
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int CutRodMem(int P[] , int n){
    int *val;
    val = new int[n+1];
    val[0] = 0;
    for(int i = 1 ; i <= n ; i++){
        int max_val = INT_MIN;
        for(int j = 0 ;j<i ; j ++){
            max_val = max(max_val , P[j] + val[i-j-1]);
        }
        val[i] = max_val;
    }
    return val[n];
}

int CutRod2D(int P[], int n ,int sizeP){ // sizeP is of profit array an n is the length of the required rod
    // int sizeP = n;
    // cout<<sizeP<<"\n";
    int **val = new int*[sizeP + 1];
    for (int i = 0 ; i <= sizeP ; i++) val[i] = new int[n];
    for (int i = 0 ; i <= sizeP ; i++){
        for(int j =0 ; j<=n ;j++){
            if (i == 0 || j == 0)
                val[i][j] = 0;
            else if(i<=j)
                val[i][j] = max(val[i-1][j],P[i-1]+val[i][j-i]); // P[i-1] is used because we are using 0th index as 0 but P[0] is not 0 and thus will be ignored in the process
            else
                val[i][j] = val[i-1][j];

        }
    }
    return val[sizeP][n];

}

int main(){
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
    int n = sizeof(arr)/sizeof(int);
    cout<<CutRodMem(arr,n)<<"\n";
    cout<<CutRod2D(arr,10,n)<<"\n";
    return 0;
}