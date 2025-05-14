
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

int main()
{
	string s, t;
	cin >> s >> t;
	int cnt = 0;
	map<char, int> mpS, mpT;
	for (auto x : t) {
		mpT[x]++;
		if (mpT[x] == 1) cnt++;
	}
	int l = 0, ans = 0, minlen = INT_MAX;
	int index = 0;
	for (int r = 0; r < s.size(); r++) {
		mpS[s[r]]++;
		if (mpS[s[r]] == mpT[s[r]]) {
			ans++;
		}
		if (ans == cnt) {
			while (mpT[s[l]] == 0 || mpS[s[l]] > mpT[s[l]]) {
				mpS[s[l]]--;
				l++;
			}
			if (r - l + 1 < minlen) {
				minlen = r - l + 1;
				index = l;
			}
		}
	}
	if (minlen == INT_MAX) cout << -1;
	else {
		for (int i = index; i < index + minlen; i++) {
			cout << s[i];
		}
	}
}

