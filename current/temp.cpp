#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <iostream>
using namespace __gnu_pbds;
using namespace std;

const long long int maximum_space = (int)1e6;
vector<int> memoization(maximum_space + 2 , 0);
vector<int> memoization2(maximum_space + 2 , 0);
vector<int> limit(maximum_space + 2 , 0);
vector<int> limit1(maximum_space + 2 , 0);
int resolverMain(int n);
int resolverHelper(int n);

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set;
new_data_set p;

int findLimit(string str){
	int n = str.length();
	int prev_occurence = -1;
	for (int i = 0; i < n; ++i) {
		if (str[i] == '0') {
		for (int j = prev_occurence + 1; j <= i; ++j)
			limit[j] = i;
		prev_occurence = i;
		}
	}
	for (int i = prev_occurence + 1; i < n; ++i)
		limit[i] = n;

	if (limit[0] == n) {
		cout << "0\n";
		return 0;
	}

	prev_occurence = -1;
	for (int i = 0; i < n; ++i) {
		if (str[i] == '1') {
		for (int j = prev_occurence + 1; j <= i; ++j)
			limit1[j] = i;
		prev_occurence = i;
		}
	}
	for (int i = prev_occurence + 1; i < n; ++i)
		limit1[i] = n;

	return 1;
}

int*** allocateNewMemoization(int N , int M , int O){
	int*** A = (int***)malloc(M * sizeof(int**));
    if (A == NULL) return NULL;
    for (int i = 0; i < M; i++)
    {
        A[i] = (int**)malloc(N * sizeof(int*));
        if (A[i] == NULL) return NULL;
        for (int j = 0; j < N; j++)
        {
            A[i][j] = (int*)malloc(O * sizeof(int));
               if (A[i][j] == NULL) {
                return NULL;
            }
        }
    }

	return A;
}
void runDP(string str){
	int n = str.length();
	// int*** memoization3d = allocateNewMemoization(100,100,100);
	memoization[n] = memoization[n + 1] = 0;
	memoization2[n] = memoization2[n + 1] = 0;
	for (int i = n - 1; i >= 0; --i) {
		memoization[i] = memoization[i + 1];
		if (str[i] == '0' && limit1[i] < n)
			memoization[i] = max(memoization[i], memoization[limit1[i] + 1] + 1);
		if (str[i] == '1' && limit[i] < n)
			memoization[i] = max(memoization[i], memoization[limit[i] + 1] + 1);
		memoization2[i] = memoization2[i + 1];
		if (limit1[i] < n)
			memoization2[i] = max(memoization2[i], memoization[limit1[i] + 1] + 1);
	}
}

void buildString(string &ans , string str ){
	int n = str.length();
	int size = memoization2[0] + 1;
	int i_curr = limit1[0] + 1;
	for (int i = 1; i < size; ++i) {
		auto max = *p.find_by_order(str[i]);
		if (i_curr >= n) {
			ans+='0';
			continue;
		}
		if (limit[i_curr] >= n) {
			ans+='0';
			i_curr = limit[i_curr] + 1;
			continue;
		}
		if (memoization[limit[i_curr] + 1] < size - i - 1) {
			ans+='0';
			i_curr = limit[i_curr] + 1;
		} else {
			ans+='1';
			i_curr = limit1[i_curr] + 1;
		}
	}
}
int resolverMain(int n)
{
    if (n < 0)
        return 0;
    else
        if (n == 0)
            return 1;
        else
            return (n - resolverHelper(n - 1));
}
int resolverHelper(int n)
{
    if (n < 0)
        return 0;
    else
        if (n == 0)
            return 0;
        else
            return (n - resolverMain(n - 1));
}
void solve() {
	string str;
	cin >> str;
	int n = str.length();
	string ans = "1";

	for(int i = 0 ; i<n ; i++) {
		p.insert(str[i]);
	}

	if(!findLimit(str)) return;

	runDP(str);

	resolverMain(100);

	buildString(ans, str);
	cout << ans << '\n';

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}