#include<bits/stdc++.h>

using namespace std;

int ga[10][10];

int binomial2d(int n,int k){
    for (int i =0 ; i<n ; i++){
        for (int j=0 ; j<min(i,n) ; j++){
            if( j=0 || i==j ){
                ga[i][j]=1;
            }
            else{
                ga[i][j] = ga[i-1][j] + ga[i-1][j-1];
            }
        }
    }
    return ga[n-1][k-1];
}

int main(){
    int x = binomial2d(5,3);
    cout<<x;
}