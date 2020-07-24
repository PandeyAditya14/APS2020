#include <bits/stdc++.h>
using namespace std;
using vi = vector <int> ;
using ll = long long;

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ii pair<int,int>


// const int N=1e5+5;

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n)  , B(n);
        for(int i = 0; i<n; i++) cin>>A[i];
        for(int i = 0; i<n; i++) cin>>B[i];
        unordered_map<int,int> Amap , Bmap;
        for(auto x: A){
            if(Amap.find(x) == Amap.end())
                Amap[x]=1;
            else
                Amap[x]+=1;
        }
        for(auto x: B){
            if(Bmap.find(x) == Bmap.end())
                Bmap[x]=1;
            else
                Bmap[x]+=1;
        }

        vector<int> Agives, Bgives;
        bool flag = true;
        for(auto it : Amap){
            int Bcount , diff;
            if(Bmap.find(it.first) == Bmap.end())
                Bcount = 0;
            else
                Bcount = Bmap[it.first];
            if(Bcount < it.second){
                diff = it.second - Bcount;
                if(diff % 2 != 0){
                    flag = false;
                    break;
                }
                diff = diff/2;
                for(int ff =  0  ; ff<diff ; ff++) Agives.push_back(it.first);
            }   
        }
        if(!flag){
            cout<<-1<<"\n";
            continue;
        }
        for(auto it : Bmap){
            int Acount , diff;
            if(Amap.find(it.first) == Amap.end())
                Acount = 0;
            else
                Acount = Amap[it.first];
            if(Acount < it.second){
                diff = it.second - Acount;
                if(diff % 2 != 0){
                    flag = false;
                    break;
                }
                diff = diff/2;
                for(int ff =  0  ; ff<diff ; ff++) Bgives.push_back(it.first);
            }   
        }
        if (Agives.size() != Bgives.size()){
            cout<<-1<<"\n";
            continue;
        }
        int cost = 0;
        sort(Agives.begin(),Agives.end());
        sort(Bgives.begin(),Bgives.end(),greater<int>());
        for(int i = 0 ; i< Agives.size() ; i++) cost+=min(Agives[i],Bgives[i]);
        cout<<cost<<"\n";
    }
    return 0;
}