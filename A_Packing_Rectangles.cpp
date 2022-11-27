#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <cmath>

using namespace std;
using ll = long long;

bool good(ll n, ll w, ll h, ll x)
{
	ll result = (x / w) * (x / h);
	return result >= n;
}
int main()
{
	ios::sync_with_stdio(false);
	ll w, h, n;
	cin >> w >> h >> n;
	ll l = 0;
	ll r = 1;
	while (!good(n, w, h, r))
		r *= 2;
	while (r > l + 1)
	{
		ll m = (l + r) / 2;
		if (good(n, w, h, m))
		{
			r = m;
		}
		else
		{
			l = m;
		}
	}
	cout << r << "\n";
}