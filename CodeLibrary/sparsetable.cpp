#include <bits/stdc++.h>
using namespace std;

int lookup[50][50];

int query(int a[] , int L , int R){
    int j = (int)log2(R-L+1);
    if(a[lookup[L][j]]<=a[lookup[R-(1<<j)+1][j]])
        return a[lookup[L][j]];
    else 
        return a[lookup[R-(1<<j)  + 1][j]];
    
    
}

int main(){
 
 int a[] = {7,2,3,0,5,10,3,12,18};
 int n = 9,i,j;
 for(i = 0 ; i< n ;  i++){
     lookup[i][0]=1;
 }
 for ( j = 1 ; (1<<j)<=n ; j++){
     for ( i = 0 ; (i + (j<<n)-1) < n; i++){
         if(a[lookup[i][j-1]] < a[lookup[i+(1<<(j-1))][j-1]]){
             lookup[i][j] = lookup[i][j-1];
         }
         else
         {
             lookup[i][j] = lookup[i+(1<<(j-1))][j-1];
         }
         
     }
 }
 cout << "In range [2..6] 
 "<<query(a,2,6);
 return 0;
}