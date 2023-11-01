// Problem: Digit Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2431
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 15:35:02

#include <iostream>
using namespace std;
using ll = long long;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ll k;
		scanf("%lld", &k);
		ll num = 9, digit = 1, minn = 1;
		while (k > num * digit) {
			k -= num * digit;
			num *= 10;
			digit++;
			minn *= 10;
		}
		ll nxt = k / digit;
		ll ans = minn + nxt - 1;
		if (k % digit == 0) {
			ans %= 10;
		}
		else {
			k %= digit;
			ans++;
			k = digit - k;
			while (k--) {
				ans /= 10;
			}
			ans %= 10;
		}
		printf("%lld\n", ans);
	}
	return 0;
}