#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
int a[2000005];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	multiset<int> se;
	for (int i = 0; i < k; i++)
	{
		se.insert(a[i]);
	}
	auto it = se.begin();
	advance(it, (k - 1) / 2);
	cout << *it << " ";
	for (int i = k; i < n; i++) {
		se.insert(a[i]);
		if (a[i] < *it) {
			it--;
		}
		if (a[i - k] <= *it) it++;
		se.erase(se.lower_bound(a[i - k]));
		cout << *it << " ";
	}
}
