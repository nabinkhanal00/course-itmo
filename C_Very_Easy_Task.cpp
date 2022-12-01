#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <iomanip>

using namespace std;
using ll = long long;

bool good(int n, int x, int y, int t)
{
	int count = int(t / x) + int(t / y);
	return count >= (n - 1);
}

int main()
{
	ios::sync_with_stdio(false);
	int n, x, y;
	cin >> n >> x >> y;
	if (n == 1)
	{
		cout << min(x, y) << "\n";
		return 0;
	}
	int l = 0;
	int r = 1e9;
	while (r > l + 1)
	{
		int t = (l + r) / 2;
		if (good(n, x, y, t))
		{
			r = t;
		}
		else
		{
			l = t;
		}
	}
	cout << r + min(x, y) << "\n";
}