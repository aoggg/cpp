// Problem: Number Spiral
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1071
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 08:43:51

#include <iostream>
using namespace std;
using ll = long long;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ll x, y;
		scanf("%lld%lld", &x, &y);
		ll ans = max(x, y) * max(x, y);
		int maxx, maxy;
		if (max(x, y) % 2 == 1) {
			maxx = 1;
			maxy = max(x, y);
		}
		else {
			maxx = max(x, y);
			maxy = 1;
		}
		ans -= abs(maxx - x) + abs(maxy - y);
		printf("%lld\n", ans);
	}
	return 0;
}