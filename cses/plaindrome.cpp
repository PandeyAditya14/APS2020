/**
 * @file plaindrome.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is the implementation of the CSES problem 1755 Palindrome Reorder
 * @version 0.1
 * @date 2020-06-23
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void palindromeMaker(string str){
    cout<<str;
    unordered_map<char,int> hmap;
    for (int i = 0 ; i<str.length() ;  i++)
        hmap[str[i]]+=1;
    
    int oddCount =0;
    char oddChar;
    for (auto x: hmap){
        if (x.second %2 == 0){
            ++oddCount;
            oddChar = x.second;
        }
    }
    if(oddCount > 1 || (oddCount == 1 && str.length() %2 ==0)){
        cout<<"NO SOLUTION";
        return;
    }
    string fhalf = "" , shalf="";
    for (auto x: hmap){
        fhalf = fhalf + string(x.second/2 , x.first);
        shalf = string(x.second/2 , x.first);
    }
    if (str.length() % 2 ==0 )
        cout<<fhalf + shalf;
    else
        cout<<fhalf + oddChar + shalf;
    return;
}

int main(){
    string str;
    cin>>str;
    cout<<str;
    palindromeMaker(str);
    return 0;
}