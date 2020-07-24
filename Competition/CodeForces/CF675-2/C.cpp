#include<bits/stdc++.h>
using namespace std;
#define ii pair<int ,int>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        map<int , int , greater<int>> first , second;
        unordered_map<int , int> ftos;
        for(int i = 0 ; i<m ; i++){
            int ft , sd;
            cin>>ft>>sd;
            first.insert({ft,i});
            ftos.insert({i,sd});
        }
        int happy = 0;
        auto it = first.begin();
        happy += it->first;
        second.insert({ftos[it->second],it->second});
        first.erase(it);
        n--;
        while(n--){
            auto it1 = first.begin() , it2 = second.begin();
            if(it1->first > it2->first){
                happy += it1->first;
                second.insert({ftos[it1->second],it1->second});
                first.erase(it1);
                continue;
            }
            happy+=n*it2->first;
            n=0;
        }
        cout<<happy<<"\n";
    }
}