#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    map<long long int ,int> lastIndex; // To map the numbers to their last occurence
    long long int i = 0; // Starting index of the window
    long long int res = 0; // final answer
    for (long long int j = 0 ; j < n ; j++){ // j is the ending index of the window
        if(!lastIndex.count(arr[j])) lastIndex[arr[j]] = -1LL; //if there is no occurence of this arr[] then insert -1 because if we insert our current index then logic breaks 
        i = max(i,lastIndex[arr[j]] + 1LL); //if there is an occurence slide the starting index of window to last occurence 
        res = max(res , j - i + 1LL); //update the result with the new window
        lastIndex[arr[j]]=j; //update lastIndex of this element 
    }

    cout<<res<<"\n";
}