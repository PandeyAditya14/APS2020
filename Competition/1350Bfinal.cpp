#include<bits/stdc++.h>
#define MAXIM 5000005
using namespace std;
int arr[MAXIM] ,n ;
int meomize[MAXIM];

int main()
{
	int T;
    cin>>T;
	while(T--)
	{
		cin>>n;
		for(int i = 1; i<=n; i++)
			cin>>arr[i];
		for(int i = 1; i<=n; i++)
			meomize[i] = 1;
		for(int i = 1; i<=n; i++) 
			for(int j = i*2; j<=n; j += i)
				if(arr[i]<arr[j])
					meomize[j] = max(meomize[j],meomize[i]+1);
		int ans = 0;
		for(int i = 1; i<=n; i++)
			ans = max(ans,meomize[i]);
		cout << ans << endl;
	}
	return 0;
}