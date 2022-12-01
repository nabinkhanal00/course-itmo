#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	// cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int k;
	cin >> k;
	while (k--)
	{
		int smaller, larger;
		cin >> smaller >> larger;
		int l = -1, r = n;
		int x = smaller;
		while (r > l + 1)
		{
			int m = (l + r) / 2;
			if (a[m] < x)
			{
				l = m;
			}
			else
			{
				r = m;
			}
		}
		int first_index = l;
		x = larger;
		l = -1, r = n;

		while (r > l + 1)
		{
			int m = (l + r) / 2;
			if (a[m] <= x)
			{
				l = m;
			}
			else
			{
				r = m;
			}
		}
		int last_index = r;
		cout << last_index - first_index - 1 << " ";
	}
}
