#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		int l = -1;
		int r = n;
		while (r > l + 1)
		{
			int m = (l + r) / 2;
			if (vec[m] <= x)
			{
				l = m;
			}
			else
			{
				r = m;
			}
		}
		cout << l + 1 << "\n";
	}
}