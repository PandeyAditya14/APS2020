/**
 * @file Nearest_Smaller_Values.cpp
 * @author Aditya Kumar Pandey (pandeyaditya14@github.io)
 * @brief :-> Your task is to find the previous smaller number
 *         -> store the element and the index as a pair in priority queue (internally implemented as max heap)
 *         -> When we query the top element we find closest element , when we get this element we check if its values is less than element
 *         -> if yes pop if no then this index is answer
 *         -> if max_heap is empty then answer is 0
 * @date 2021-03-16
 * QUESTION: https://cses.fi/problemset/task/1645
 * 
 */
#include<bits/stdc++.h>

#define ll long long int 
#define pill pair< int , ll >

using namespace std;

#define mp make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    int n ;
    cin>>n;
    vector<ll> arr(n) , ans(n);
    for(int i = 0 ; i<n ; i++ )cin>>arr[i];

    priority_queue<pill> max_heap;
    for(int i = 0 ; i<n ; i++){
        bool found = false;
        while(!max_heap.empty()){
            auto it = max_heap.top();
            if(it.second < arr[i]){
                found = true;
                ans[i] = it.first+1;
                break;
            }
            max_heap.pop();
        }
        if(!found) ans[i] = 0;
        max_heap.push(mp(i,arr[i]));
    }
    for(auto it : ans) cout<<it<<" ";
    cout<<"\n";

    return 0;    
}