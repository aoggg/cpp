// Problem: C. 蹺蹺板
// Contest: Codeforces - 選幹考好欸
// URL: https://codeforces.com/gym/445760/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll w[MAXN], sum[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", w + i);
		sum[i] = sum[i - 1] + w[i];
	}
	ll ans = abs(sum[n] - 2 * sum[1]);
	for (int i = 2; i < n; i++) {
		ans = min(abs(sum[n] - 2 * sum[i]), ans);
	}
	printf("%lld\n", ans);
	return 0;
}