#include<bits/stdc++.h>

using namespace std;
int main()
{
    // cout<<"Hello World";
    int t;
    cin>>t;
    while(t--){
        int n  , p ;
        cin>>n>>p;
        vector<int>d(n);
        for (int i = 0 ; i<n  ; i++){
            cin>>d[i];
        }
        // for (auto it = d.begin() ; it != d.end() ; it++)
        // {
        //     cout<<*it<<"\t";
        // }
        bool over = false;
        for (int i = 0; i<n ; i++){
            if(p%d[i] != 0){
                over =true;
                break;
            }
        } 
        for (int i = 0 ; i<n-1 ; i++){
            for(int j = i+1 ; j<n;j++){
                if(d[j] % d[i] != 0){
                    over = true;
                    break;}
            }
        }
        // cout<<over;
        if (over == false){
            cout<<"NO"<<"\n";
        }
        else{
            int res[n] = {0};
            int i=n-1;
            while (p>0 && i>=0){
                int temp;
                if (p%d[i]==0){
                    temp = p/d[i] -1;
                    res[i]=temp;
                    p=p-(temp*d[i]);
                }
                else{
                    temp=p/d[i] + 1;
                    res[i] = temp;
                    p = p - (temp*d[i]);
                }
                i--;
            }
            cout<<"YES\t";
            for(int j  = 0 ; j<n ; j++){
                cout<<res[j]<<"\t";
            }
            cout<<endl;
        }


    }
}