#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int , int>
#define mp make_pair
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int n ; 
    cin>>n;
    vector<pii> tasks(n);
    for(int i = 0 ; i < n ; i++){
        int duration , deadline;
        cin>>duration>>deadline;
        tasks[i] = mp(duration,deadline);
    }

    sort(tasks.begin() , tasks.end());
    ll time = 0 , reward = 0;
    for(auto it : tasks){
        time+=it.first;
        reward+=(it.second - time);
    }
    cout<<reward<<"\n";

}

