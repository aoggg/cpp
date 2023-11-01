// Problem: Two Knights
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1072
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 08:54:16

#include <iostream> 
using namespace std;
using ll = long long;

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		ll ans = ((ll)i * i) * ((ll)i * i - 1) / 2;
		ans -= 8LL * (i - 1) * (i - 2) / 2;
		printf("%lld\n", ans);
	}
	return 0;
}