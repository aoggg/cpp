// Problem: A. The Man who became a God
// Contest: Codeforces - Codeforces Round 882 (Div. 2)
// URL: https://codeforces.com/contest/1847/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 105;

int a[MAXN], diff[MAXN];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i + 1 < n; i++) diff[i] = abs(a[i] - a[i + 1]);
		sort(diff, diff + n - 1);
		int ans = 0;
		for (int i = 0; i < n - k; i++) ans += diff[i];
		cout << ans << '\n'; 
	}
	return 0;
}