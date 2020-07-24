/**
 * @file CDFRCS489B.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is solution for codeforces 489 B
 * @version 0.1
 * @date 2020-07-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n;
    vector<int> boys(n);
    for(int i = 0 ;i<n ;i++) cin>>boys[i];
    cin>>m;
    vector<int> girls(m);
    for(int i = 0 ;i<m ;i++) cin>>girls[i];
    sort(boys.begin() , boys.end());
    sort(girls.begin(),girls.end());
    int ind_boys = 0 , ind_girls = 0 , count = 0;
    while(ind_boys<n && ind_girls <m ){
        if (abs(boys[ind_boys] - girls[ind_girls]) <= 1){
            count++;
            ind_boys++;
            ind_girls++;
        }
        else{
            if (girls[ind_girls] < boys[ind_boys])
                ind_girls++;
            else
                ind_boys++;    
        }
    }
    cout<<count<<"\n";
    
}