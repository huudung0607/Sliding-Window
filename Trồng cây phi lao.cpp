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
#include <unordered_set>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	int live = 0, death = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1) live++;
	}
	if (live < k) {
		cout << -1; return 0;
	}
	for (int i = 0; i < k; i += 1) {
		if (a[i] == 0) death++;
	}
	int ans = death;
	for (int i = k; i < n; i++) {
		if (a[i - k] == 0) death--;
		if (a[i] == 0) death++;
		ans = min(ans, death);
	}
	cout << ans;
	
}
