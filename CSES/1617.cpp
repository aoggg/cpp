// Problem: Bit Strings
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1617
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 14:25:44

#include <iostream>
using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main() {
	int n;
	scanf("%d", &n);
	ll ans = 1, num = 2;
	while (n) {
		if (n & 1) {
			ans = ans * num % MOD;
		}
		num = num * num % MOD;
		n >>= 1;
	}
	printf("%lld\n", ans);
	return 0;
}