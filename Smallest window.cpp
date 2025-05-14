
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
	string s;
	cin >> s;
	set<char> se;
	for (auto x : s) {
		se.insert(x);
	}
	int cnt = 0, l = 0, minlen = s.size();
	map<char, int>mp;
	for (int i = 0; i < s.size(); i++) {
		mp[s[i]]++;
		if (mp[s[i]] == 1) {
			cnt++;
		}
		if (cnt == se.size()) {
			while (true) {
				if (mp[s[l]] == 1) {
					break;
				}
				mp[s[l]]--;
				l++;
			}
			minlen = min(minlen, i - l + 1);
		}
	}
	cout << minlen;
}

