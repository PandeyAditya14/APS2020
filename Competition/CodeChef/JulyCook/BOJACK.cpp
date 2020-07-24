/**
 * @file BOJACK.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This Solution to the Codechef July Cookoff solution is from editorial
 * @link https://discuss.codechef.com/t/bojack-editorial/72471
 * @version 0.1
 * @date 2020-07-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans = string(n,'a') + string(n,'b');
        cout<<2*n<<"\n"<<ans<<"\n";
    }
}