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
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int l = 0, ans = INT_MAX, index = -1;
	int sum = 0;
	for (int r = 0; r < n; r++) {
		sum += a[r];
		while (sum >= k) {
			if (r - l + 1 < ans) {
				ans = r - l + 1;
				index = l;
			}
			sum -= a[l];
			l++;
		}	
	}
	if (ans == INT_MAX) cout << -1;
	else for (int i = index; i < index + ans; i += 1) cout << a[i] << " ";
}
