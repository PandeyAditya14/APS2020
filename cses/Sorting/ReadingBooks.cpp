#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fast_cin();
    int n;
    cin>>n;
    vector<ll> books(n);
    for(int i = 0 ; i <n ; i++) cin>>books[i];
    sort(books.begin() , books.end());
    int indLeft = -1 , indRight = n;
    ll sumLeft = 0 , sumRight = 0;
    while(indLeft<indRight-1){
        if(sumLeft == sumRight){
            if((indRight - indLeft) > 1){
                indLeft++; indRight--;
                sumRight+=books[indRight];
                sumLeft+=books[indLeft];
            }
            else{
                indLeft++; indRight--;
                sumRight+=books[indRight];
                // sumLeft+=books[indLeft];
            }
        }
        else if(sumLeft > sumRight){
            indRight--;
            sumRight+=books[indRight];
        }
        else{
            indLeft++;
            sumLeft+=books[indLeft];
        }
    }
    cout<<2LL*max(sumRight,sumLeft)<<"\n";

    return 0;
}