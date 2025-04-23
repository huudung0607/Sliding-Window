
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
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	int index = 0;
	for (int i = 0; i < k; i++) {
		sum += a[i];
	}
	long long maxsum = sum;
	for (int i = k; i < n; i++) {
		sum += a[i] - a[i - k];
		if (sum > maxsum) {
			maxsum = sum;
			index = i - k + 1;
		}
	}
	cout << maxsum << endl;
	for (int i = index; i < index + k; i++) {
		cout << a[i] << " ";
	}
}

