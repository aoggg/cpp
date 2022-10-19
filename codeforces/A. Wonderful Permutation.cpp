// Problem: A. Wonderful Permutation
// Contest: Codeforces - Codeforces Round #813 (Div. 2)
// URL: https://codeforces.com/contest/1712/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int p;
			cin >> p;
			if (p <= k && i >= k) {
				// cout << p << ' ' << i << '\n';
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}