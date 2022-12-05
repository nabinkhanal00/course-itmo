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
	int n;
	ll s;
	cin >> n >> s;
	vi a(n);
	get(a);
	int inf = 1e9 + 1;
	int min_length = inf;
	ll sum = 0;
	int l = 0;
	for (int r = 0; r < n; r++)
	{
		sum += a[r];
		while ((sum - a[l]) >= s)
		{
			sum -= a[l];
			l++;
		}
		if (sum >= s)
		{
			min_length = min(r - l + 1, min_length);
		}
	}
	if (min_length == inf)
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << min_length << "\n";
	}
}