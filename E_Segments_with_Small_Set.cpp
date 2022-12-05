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

void add(int x, vi &count, int &unique)
{
	count[x]++;
	if (count[x] == 1)
		unique++;
}

void remove(int x, vi &count, int &unique)
{
	count[x]--;
	if (count[x] == 0)
		unique--;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vi a(n);
	get(a);
	vi count(1e5 + 1, 0);

	int l = 0;
	ll result = 0;
	int unique = 0;
	for (int r = 0; r < n; r++)
	{
		add(a[r], count, unique);
		while (unique > k)
		{
			remove(a[l], count, unique);
			l++;
		}
		result += (r - l + 1);
	}
	cout << result << "\n";
}