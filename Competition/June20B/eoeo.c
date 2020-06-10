#include<stdio.h>
#define ll long long
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll ts , temp , ans , pw2 = 1;
        scanf("%lld" , &ts);
        temp = ts;
        while(temp %2 == 0 && temp >= 2){
            pw2*=2 ;
            temp/=2;
        }
        ans = (ts / (pw2*2));
        printf("%lld\n" , ans);
    }
    return 0;
}