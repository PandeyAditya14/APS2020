/**
* Q: https://cses.fi/problemset/result/2163/
* Jsoephus Algorithms: https://www.geeksforgeeks.org/josephus-problem-set-1-a-on-solution/
* Policy-Based: https://www.geeksforgeeks.org/ordered-set-gnu-c-pbds/
* https://codeforces.com/blog/entry/83295?#comment-751599
**/
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(ordered_set &arr , int size , int k){
    if (arr.size() == 1){
        cout<<*arr.begin();
        return;
    }
    size = (size + k) % arr.size();
    auto it = arr.find_by_order(size);
    // advance(it,size);
    cout<<*it<<" ";
    arr.erase(*it);
    solve(arr , size , k);
}

int main(){
    fast_cin();
    int n , k ;
    cin>>n>>k;
    ordered_set arr;
    for(int i = 1 ; i <=n ; i++) arr.insert(i);
    solve(arr,0,k);
    cout<<"\n";
    return 0;
}