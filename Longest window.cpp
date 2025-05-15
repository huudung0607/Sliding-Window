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
	string s;
	cin >> s;
	unordered_set<char>se;
	int l = 0, cnt = 0, ans = 0;
	for (int r = 0; r < s.size(); r++) {
		while (se.count(s[r])) {
			se.erase(s[l]);
			l++;
		}
		se.insert(s[r]);
		ans = max(ans, r - l + 1);
	}
	cout << ans;
}
