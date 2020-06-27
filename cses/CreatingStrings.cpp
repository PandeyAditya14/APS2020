/**
 * @file CreatingStrings.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is a solution for CSES Creating Strings 
 *        Question @ https://cses.fi/problemset/result/588023/
 *        Refer @ https://www.geeksforgeeks.org/lexicographic-permutations-of-string/
 * @version 0.1
 * @date 2020-06-24
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int ceilIndex(string str , char first , int l){
    int ceilIndex =l;
    for (int i = l+1 ; i< str.length() ; i++)
        if(str[i]>first && str[i]<str[ceilIndex])
            ceilIndex = i;
    return ceilIndex;
}

void permutateString(string str){
    sort(str.begin() , str.end());
    vector<string> res;
    bool isFinished = false;
    while( !isFinished ){
        res.push_back(str);
        int first;
        for(first = str.length()-2 ; first>=0 ; first--)
            if(str[first] < str[first+1]){
                break;
            }
        if(first == -1)
            isFinished = true;
        else{
            int second = ceilIndex(str , str[first] , first+1);
            swap(str[first],str[second]) ; 
            sort(str.begin() + first + 1 , str.end());
        }
    }
    cout<<res.size()<<"\n";
    for(auto x : res)
        cout<<x<<"\n";
}

int main(){
    string str;
    cin>>str;
    permutateString(str);
    return 0;
}