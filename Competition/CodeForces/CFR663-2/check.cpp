#include<bits/stdc++.h>
using namespace std;
long long int gcdExtended(long long int a, long long int b, long long int *x, long long int *y) 
{ 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
    long long int x1, y1;
    long long int gcd = gcdExtended(b%a, a, &x1, &y1); 

    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 
long long int modInverse(long long int a, long long int m) 
{ 
    long long int x, y; 
    long long int g = gcdExtended(a, m, &x, &y); 
    if (g != 1) 
        cout << "Inverse doesn't exist"; 
    else
    { 
        long long int res = (x%m + m) % m; 
        return res; 
    } 
} 
  
int main() 
{ 
    long long int num; 
    cin>>num;
    long long int ans = 1; 
    long long int i = modInverse(6, 10000007); 

    for (int i = 0; i < 3; i++)  
        ans = (ans * (num- i)) % 1000000007; 
      
    ans = ((ans * i) % 1000000007); 
    ans = (((num-2)*(num-1))%1000000007);
    cout<<ans<<"\n";  
    return 0; 
} 