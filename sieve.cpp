// C. Removing Smallest Multiples
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given a set S, which contains the first n positive integers: 1,2,…,n.

// You can perform the following operation on S any number of times (possibly zero):

// Choose a positive integer k where 1≤k≤n, such that there exists a multiple of k in S. Then, delete the smallest multiple of k from S. This operation requires a cost of k.
// You are given a set T, which is a subset of S. Find the minimum possible total cost of operations such that S would be transformed into T. We can show that such a transformation is always possible.

// Input
// The first line of the input contains a single integer t (1≤t≤10000) — the number of test cases. The description of the test cases follows.

// The first line contains a single positive integer n (1≤n≤106).

// The second line of each test case contains a binary string of length n, describing the set T. The i-th character of the string is '1' if and only if i is an element of T, and '0' otherwise.

// It is guaranteed that the sum of n over all test cases does not exceed 106.

// Output
// For each test case, output one non-negative integer — the minimum possible total cost of operations such that S would be transformed into T.


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define pb push_back
#define rep(i, y, z) for (int i = y; i < z; ++i)
void solve()
{
	int n; cin>>n;
	string s; cin>>s;
	string marked(n,'1');
	int ans=0;
	for (int i = 0; i < n; i++)
	{
		if(s[i]=='0'){
			for (int j = i; j < n; j+=i+1)
			{
				if(s[j]=='1') break;
				if(marked[j]=='0') continue;
				marked[j]='0';
				ans+=i+1;
			}
		}
	}
	cout<<ans<<endl;
	
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}
