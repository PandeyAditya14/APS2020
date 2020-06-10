#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
#define maxn 1111111
ll n,k,f[maxn];
vector<int>g[maxn];
int N=100000,tot;
void Solve(int pos,int k)
{
    if(tot>=N)return ;
    if(k==0)
    {
        cout<<f[pos]<<" ";
        tot++;
        return ;
    }
    if(pos==0)
    {
        cout<<"1 ";
        tot++;
        return ;
    }
    for(int i=0;i<g[pos].size();i++)
    {
        Solve(g[pos][i],k-1);
        if(tot>=N)return ;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    scanf("%I64d%I64d",&n,&k);

    if(k>=100000)
    {
        if(n==1)printf("1\n");
        else
        { 
            for(int i=1;i<=N;i++)printf("1 ");
            printf("\n");
        }
        return 0;
    }
    tot=0;
    int res=0;
    for(ll i=1;i*i<=n;i++)
        if(n%i==0)
        {
            f[res++]=i;
            if(i*i!=n)f[res++]=n/i;
        }
    sort(f,f+res);
    for(int i=0;i<res;i++)
    {
        g[i].clear();
        for(int j=0;j<=i;j++)
            if(f[i]%f[j]==0)g[i].push_back(j);
    }
    Solve(res-1,k);
    cout<<"\n"; 

    return 0;
}