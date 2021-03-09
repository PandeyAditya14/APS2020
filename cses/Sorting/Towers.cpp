#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long int> arr(n+1,0);
    long long int cur_max = 0;
    int ct = 0;
    for(int i = 0  ; i<n ; i++){
        int j = ct; 
        long long int temp; cin>>temp;
        while(temp < arr[j]) j--;
        arr[j++] = temp;
        ct = max(ct,j);
    }
    cout<<ct<<"\n";
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
    cout<<"\n";

}