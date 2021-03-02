#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m , d;
    cin>>n>>m>>d;
    int *applicants = new int[n];
    int *apartments = new int[m];
    for(int i = 0 ; i<n; i++) cin>>applicants[i];
    for(int i = 0 ; i<m; i++) cin>>apartments[i];
    sort(applicants,applicants+n);
    sort(apartments,apartments+m);
    int ind_a =0, ind_b =0 , as=0;
    while(ind_a<n && ind_b<m){
        if(abs(applicants[ind_a] - apartments[ind_b]) <= d){
            as++;
            ind_a++;
            ind_b++;
        }
        else{
            if(applicants[ind_a]>apartments[ind_b]) ind_b++;
            else ind_a++;
        }
    }
    cout<<as;
}