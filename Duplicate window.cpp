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
	sort(a.begin(), a.end());
	int l = 0;
	for (int r = 1; r < n; r++) {
		if (a[l] < a[r]) {
			l++;
		}
		else if (a[l] == a[r] && r != l) {
			if (abs(r - l) <= k) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}
