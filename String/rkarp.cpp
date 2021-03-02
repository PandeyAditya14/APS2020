#include<bits/stdc++.h>
using namespace std;
const int d = 5;
inline int val(char x){
    return x - 'a';
}

void robinkarp(string corpus , string pattern){
    
}

void robinkarp(string corpus , string pattern){ // Basic Robin Karp worst case(approx . O(m*n))
    int hash = 0 , chash = 0;
    bool flag = false; // To check if anyone instance of pattern is found
    int n = pattern.size() , m = corpus.size();
    // Basic Sanity check for pattern and corpus size
    if (n == 0){
        cout<<"0";
        return;
    } 
    if(n>m){
        cout<<"-1";
        return;
    }
    // Calculate Patter hash and Corpus hash for i:0 -> n
    for(int i = 0 ; i< pattern.size() ; i++){
        hash+=val(pattern[i]);
        chash+=val(corpus[i]);
    }
    
    // Using Sliding window for i:0 -> m-n
    for(int i = 0 ; i<=m-n ; i++){
        if(i>0){
            chash = chash - val(corpus[i-1]) + val(corpus[i + n - 1]);
        }
        // If hash matches check for char match
        if(chash == hash){
            bool found = true;
            for(int j = 0 ; j<n ; j++){
                if(corpus[i+j] != pattern[j]){
                    found = false;
                    break;
                }
            }
            // Everything is a-ok then print the starting index for pattern
            if(found){
                cout<<i<<" ";
                flag=true;
            }
        }
    }
    // If not even a single match is found then print -1
    if(!flag){
        cout<<"-1";
    }

}
int main(){
    string str1 , str2; // str1 is the main string and str2 has to searched in str1 
    cin>>str1>>str2;
    robinkarp(str1 , str2);    
}