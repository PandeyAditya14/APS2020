/**
 * @file cpiles.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is a solution for Coin Piles CSES 1754 @ https://cses.fi/problemset/task/1754
 *        Ref : http://www.mathnstuff.com/math/algebra/adeterm.htm
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double c1 , c2;
        cin>>c1>>c2;
        double x , y;
        x = (2*c1 -c2)/3;
        y = (2*c2 -c1)/3;
        // cout<<"x: "<<x<<" y: "<<y<<"\n";
        if((floor(x) == ceil(x)) && (floor(y) == ceil(y)) &&(x>=0 and y >=0))
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }

}