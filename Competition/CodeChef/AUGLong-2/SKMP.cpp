#include<bits/stdc++.h>
using namespace std;
int bSearch(string s , char ch){
    int first = 0 , last = s.size() -1 , middle = (first+last)/2;
    while(first<=last){
        if(s[middle]<ch){
            first=middle+1;
        }
        else if(s[middle] == ch){
            return middle;
        }
        else{
            last = middle-1;
        }
        middle = (first + last)/2;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str , pat;
        cin>>str>>pat;
        sort(str.begin(),str.end());
        for(int i = 0 ; i<pat.size() ; i++){
            int pos = bSearch(str,pat[i]);
            str.erase(pos,1);
        }
        int pos = 0;
        while(str[pos] <= pat[0] && pos<str.size()){
            pos++;
        }
        str.insert(pos,pat);
        cout<<str<<"\n";
    }
}