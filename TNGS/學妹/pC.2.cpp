// Problem: C. 蹺蹺板
// Contest: Codeforces - 選幹考好欸
// URL: https://codeforces.com/gym/445760/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll w[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	ll total = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lld", w + i);
		total += w[i];
	}
	total -= 2 * w[0];
	ll ans = abs(total);
	for (int i = 1; i < n - 1; i++) {
		total -= 2 * w[i];
		ans = min(ans, abs(total));
	}
	printf("%lld\n", ans);
	return 0;
}