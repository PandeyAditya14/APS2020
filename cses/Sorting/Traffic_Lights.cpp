/**
 * Q:  https://cses.fi/problemset/task/1163/
 * ANS: https://usaco.guide/solutions/cses-1163?lang=cpp
 **/
#include<bits/stdc++.h>
using namespace std ;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main(){
    fast_cin();
    int x , n;
    cin>>x>>n;
    set<int> lights ; multiset<int> intervals;
    lights.insert(0);
    lights.insert(x);
    intervals.insert(x-0);
    while(n--){
        int temp ;
        cin>>temp;
        /**
         *  We find the left and right traffic light for the interval in which the new traffic light is so 
         *  lf -> left boundary
         *  rt -> right boundary
         *  
         *  In Intervals we need to delete the interval (rt - lf)
         *  and now we insert
         *  
         *  -> (temp - lf)
         *  -> (rt -temp)
         * 
         *  After this we insert the temp to set lights for future iterations 
         *  Then to select the max elements we find the last element as multiset is sorted container 
         **/
         
        auto rt = lights.upper_bound(temp);
        auto lf = rt; lf--;
        intervals.erase(intervals.find(*rt - *lf));
        intervals.insert(*rt -temp);
        intervals.insert(temp - *lf);
        lights.insert(temp);
        auto it = intervals.end(); it--;
        cout<<*it<<" ";
    }
    cout<<"\n";

    return 0;
}