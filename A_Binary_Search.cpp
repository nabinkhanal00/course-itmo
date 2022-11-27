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
		int val;
		cin >> val;
		int l = 0, r = n - 1;
		bool found = false;
		while (l <= r)
		{
			int m = (l + r) / 2;
			if (vec[m] == val)
			{
				found = true;
				cout << "YES\n";
				break;
			}
			else
			{
				if (val < vec[m])
				{
					r = m - 1;
				}
				else
				{
					l = m + 1;
				}
			}
		}
		if (!found)
			cout << "NO\n";
	}
}