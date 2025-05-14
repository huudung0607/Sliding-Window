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
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	multiset<int >se;
	for (int i = 0; i < k; i++) {
		se.insert(a[i]);
	}
	cout << *se.begin() << " " << *se.rbegin() << endl;
	for (int i = k; i < n; i++) {
		se.insert(a[i]);
		se.erase(se.find(a[i - k]));
		cout << *se.begin() << " " << *se.rbegin() << endl;
	}
}
