// Problem: B. Hamon Odyssey
// Contest: Codeforces - Codeforces Round 882 (Div. 2)
// URL: https://codeforces.com/contest/1847/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll a[MAXN];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		ll cur = a[0];
		int ans = 0;
		if (cur == 0) ans++;
		for (int i = 1; i < n; i++) {
			if (cur == 0) cur = a[i];
			else cur &= a[i];
			if (cur == 0) {
				ans++;
			}
		}
		cout << max(ans, 1) << '\n';
	}
	return 0;
}