#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr,int x){
    int ind = arr.size() -1;
    // for(int i  = 0 ; i < arr.size() ; i ++) cout << arr[i]<<" ";
    // cout<<"\n";
    auto it = prev(upper_bound(arr.begin(),arr.end(),x));
    if(*it == -1)
    return -1;
    else{
        int temp = *it;
        arr.erase(it);
        return temp;
    }
}

int main(){
    int n , m;
    cin>>n>>m;
    vector<int> ticket(n+1);
    ticket[0] = -1;
    for(int i = 1; i<=n ;i++) cin>>ticket[i];
    int *client = new int[m];
    for(int i = 0; i<m ;i++) cin>>client[i];
    sort(ticket.begin(),ticket.end());
    for( int i = 0 ; i<m ; i++){
        cout<<search(ticket,client[i])<<"\n";
    }
    
}