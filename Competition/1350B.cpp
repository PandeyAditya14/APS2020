#include<bits/stdc++.h>
using namespace std;


int retMax(int *arr, int len){  //Memory overflow due to 2d

    int half = len/2;
    // int half = 2
    int **mat;
    int max_n =0;
    mat = new int*[half+1];
    for (int i = 0 ; i<=half;i++)
        mat[i] = new int[len+1];
    for (int i = 0 ; i<=half;i++)
        for(int j = 0 ; j<= len; j++)
            mat[i][j]=1;
    for (int i = 1 ; i<=half;i++)
        for(int j = i ; j<= len; j++){ 
            if (j%i == 0 && arr[i-1]<arr[j-1])
                {
                    mat[i][j] = max(mat[i][i]+1,mat[i-1][j]);
                    // cout<<"i: "<<i<<" arr[i]:"<<arr[i-1]<<" j: "<<j<<" arr[j]:"<<arr[j-1]<<"\n";
                    max_n = max(max_n,mat[i][j]);
                }
            else{
                mat[i][j] = mat[i-1][j];
                max_n = max(max_n,mat[i][j]);
            }
                
                }
    return max_n;
}

inline int retMax1d(int *arr, int len){  //Converting the 2d array to 1d array to optimize memory consumption
    int half = len / 2;
    int *memoize = new int[len+1];
    int max_n = 1;
    for (int i = 0; i<=len ; i++)
        memoize[i]=1;
    for(int i = 1 ; i<=half  ; i++){
        for(int j = i*2 ; j<=len ; j++){
            if(j%i ==0 && arr[i-1]<arr[j-1]){
                memoize[j] = max(memoize[i]+1,memoize[j]);
                max_n = max(max_n,memoize[j]);
            }
        }
    }
    return max_n;

}



int main(){
    ios_base::sync_with_stdio(false); // some shit for faster io
    cin.tie(NULL);   // ditto
    cout.tie(NULL); // ditto
    int t;
    cin>>t;
    while(t--){
        int len ,res;
        cin>>len;
        int *arr;
        arr = new int[len];

        for (int i = 0 ; i<len ; i++)
            cin>>arr[i];
        if (len>1){
            res = retMax1d(arr,len);
        }
        else{
            res = 1;
        }
        cout<<res<<"\n";

    } 
    
    return 0;
}