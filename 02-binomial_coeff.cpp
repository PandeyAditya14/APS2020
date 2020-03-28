/**
 * @ Author: Aditya Kumar Pandey
 * @ Create Time: 2020-03-27 19:44:31
 * @ Modified by: Aditya Kumar Pandey
 * @ Modified time: 2020-03-27 20:19:39
 * @ Description: This Program is intended to demonstrate a way to calculate the binomial coefficient in a faster way using 2D memoization
 *                As well as 1D memoization both them having time efficincy  of O(n*k)
 *                 
 *                Also in the function binomial1D the use of memset with new function is very informative
 * @Link: https://www.geeksforgeeks.org/binomial-coefficient-dp-9/
 */

#include <bits/stdc++.h>
using namespace std;

int binomial2D(int n , int k){
    int **Coeff = new int*[n+1];
    for(int i = 0; i<=n ; i++)
        Coeff[i]  = new int[k+1];
    // cout<<"HERE\n";
    for ( int i = 0; i<=n  ; i++){
        for (int j = 0 ; j <= min(i,k) ; j++){
            if (i == j || j == 0)
                Coeff[i][j] = 1;
            else
            {
                Coeff[i][j] = Coeff[i-1][j-1] + Coeff [i-1][j];
            }
            
        }
    }
    return Coeff[n][k];
}

int binomial1D(int n , int k){
    // int Coeff[k+1]; 
    int *Coeff;
    Coeff = new int[k+1];
    memset(Coeff, 0, sizeof(Coeff)*sizeof(int)); // Very important 
    Coeff[0]=1;
    for(int i = 1 ; i<=n  ; i++){
        for (int j = min(i,k) ; j>0 ; j--){
            Coeff[j]+=Coeff[j-1];
        }
    }
    return Coeff[k];
}

int main(){
    int n , r;
    cout<<"Enter n and r for nCr:\n";
    cin>>n>>r;
    cout<<binomial2D(n,r)<<"\n";
    cout<<binomial1D(n,r)<<"\n";
    // binomial1D(n,r);
    return 0;
}