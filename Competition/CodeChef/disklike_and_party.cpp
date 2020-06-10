#include <bits/stdc++.h>
// #define int long long
using namespace std;

inline int fact2(int n ){
    return ((n*(n-1))/2);
}

int main(){
    ios_base::sync_with_stdio(false); // some shit for faster io
    cin.tie(NULL);   // ditto
    // cout.tie(NULL); // ditto
    int n;
    cin>>n;
    // cout<<n<<"\n";
    // printf("%d\n",n);
    
    int big[n+1][n+1];

    
    int total = fact2(n) - 90;
    // cout<<total<<"\n";
    // printf("%d\n",total);
    for (int i=0 ; i<10 ; i++){
        int row ;
        cin>>row;
        for(int j =0 ;j<9 ;j++){
            int col;
            cin>>col;
            if(big[row][col] == 1){
                total+=1;
            }
            else{
                big[row][col]=1;
                big[col][row]=1;
                // printf("big[%d][%d] = %d\n",row ,col,big[row][col]);
            }
        }
    }
    printf("%d",total);
    return  0;
}