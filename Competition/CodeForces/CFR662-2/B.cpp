#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int> wh , sh;

    vector<int> rec ,sq;
    for(int i = 0;i<n ; i++){
        int temp;
        wh[temp]+=1;
        if(wh[temp] == 2){
            rec.push_back(temp);
            sh[temp] =1;
        }
        else if(wh[temp] == 4 && rec.size() >=3){
            if(sh[temp] == 1){
                auto it = find(rec.begin(),rec.end(),temp);
                rec.erase(it);
                sq.push_back(temp);
                sh[temp]=2;
            } 
        }
        else if(wh[temp] == 6){
            if(sh[temp] == 1){
                sq.push_back(temp);
                sh[temp]=3;
            }
            else if(sh[temp] == 2){
                rec.push_back(temp);
                sh[temp]=3;
            }
        }
    }
    if (rec.size() >=3 && sq.empty()){
        for(auto x : rec){
            if (wh[x] >=4 && sh[x] == 1){
                auto it = find(rec.begin(),rec.end(),x);
                rec.erase(it);
                sq.push_back(x);
                sh[x]=2;
            }
        }
    }

}