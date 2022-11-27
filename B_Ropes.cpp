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
bool good(double length, vector<int> arr, int n)
{
	int count = 0;
	for (int &i : arr)
	{
		count += int(i / length);
	}
	return count >= n;
}

int main()
{
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	double l, r;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	l = 0;
	r = 1e8;
	for (int i = 0; i < 100; i++)
	{
		double m = (l + r) / 2;
		if (good(m, arr, k))
		{
			l = m;
		}
		else
		{
			r = m;
		}
	}
	cout << setprecision(20) << l << "\n";
}