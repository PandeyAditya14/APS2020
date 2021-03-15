#include<bits/stdc++.h>
#define ll long long int
#define plli pair<ll,int>
#define mp make_pair
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//TODO: 1. We only face 2 cases which are i.) sum - max > max i.e. the sum of the elements except the max element is greater than max element itself
    //                                                  ==> in this case answer is "sum"
    //                                        ii.) max > sum-max i.e. the max element is greater than the sum of the rest of the elements
    //                                                  ==> in this case answer is 2*max
    //

int main(){
    fast_cin();
    int n;
    cin>>n;
    
    vector<ll> books(n);
    ll sum = 0;
    for(int i = 0 ; i<n ; i++){
        cin>>books[i];
        sum+=books[i];
    }
    sort(books.begin() , books.end());
    cout<<max(sum,2*books[n-1])<<"\n";
    return 0;
}