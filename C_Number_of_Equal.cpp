#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fk(i, k, n) for (int i = k; i < int(n); i++)
#define fr(i, k, n) for (int i = k; i >= int(n); i--)
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define v2i(name, rows, cols, val) vector<vector<int>> name(rows, vector<int>(cols, val))
#define v2ll(name, rows, cols, val) vector<vector<ll>> name(rows, vector<ll>(cols, val))
#define v3i(name, x, y, z, val) vector<vector<vector<int>>> name(x, vector<vector<int>>(y, vector<int>(z, val)))
#define v3ll(name, x, y, z, val) vector<vector<vector<ll>>> name(x, vector<vector<ll>>(y, vector<ll>(z, val)))
#define get(a)        \
	for (auto &i : a) \
		cin >> i;
#define get2d(a)          \
	for (auto &i : a)     \
		for (auto &j : i) \
			cin >> j;
#define get3d(a)              \
	for (auto &i : a)         \
		for (auto &j : i)     \
			for (auto &k : j) \
				cin >> k;
#define print(a)          \
	for (auto i : a)      \
	{                     \
		cout << i << " "; \
	}                     \
	cout << endl;
#define print2d(a)            \
	for (auto i : a)          \
	{                         \
		for (auto j : i)      \
		{                     \
			cout << j << " "; \
		}                     \
		cout << endl;         \
	}
#define print3d(a)                \
	for (auto i : a)              \
	{                             \
		for (auto j : i)          \
		{                         \
			for (auto k : j)      \
			{                     \
				cout << k << " "; \
			}                     \
			cout << endl;         \
		}                         \
		cout << endl;             \
	}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;

	vi a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	int f = 0, s = 0;
	ll same_count = 0;
	while (f < n && s < m)
	{
		if (a[f] == b[s])
		{
			ll acount = 1, bcount = 1;
			int acurrent = a[f];
			f++;
			while (f < n && a[f] == acurrent)
			{
				acount++;
				f++;
			}
			int bcurrent = b[s];
			s++;
			while (s < m && b[s] == bcurrent)
			{
				bcount++;
				s++;
			}
			same_count += (acount * bcount);
		}
		else if (a[f] < b[s])
		{
			f++;
		}
		else
		{
			s++;
		}
	}
	cout << same_count << "\n";
}