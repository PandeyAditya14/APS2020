/**
 * @ Author: Aditya Kumar Pandey
 * @ Create Time: 2020-03-28 14:49:56
 * @ Description:This code uses DP to find the ways to reach a score using 3, 5, 10 in O(n) time and O(n) auxilary space
 * @ Link:https://www.geeksforgeeks.org/count-number-ways-reach-given-score-game/
 */
#include <bits/stdc++.h>
using namespace std;

int WaysToReach(int n){
    int *ways = new int[n+1];
    memset(ways,0,sizeof(ways)*sizeof(int));
    ways[0] = 1;
    for(int i = 3 ; i<=n  ; i++) ways[i]+=ways[i-3];
    for(int i = 5 ; i<=n  ; i++) ways[i]+=ways[i-5];
    for(int i = 10 ; i<=n  ; i++) ways[i]+=ways[i-10]; 

    return ways[n];
}

int main(){
    cout<<"Ways To Reach 13 is "<<WaysToReach(13)<<"\n";
    return 0;
}