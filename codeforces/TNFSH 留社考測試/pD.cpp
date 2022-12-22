// Problem: D. 高樓(buildings)
// Contest: Codeforces - 留社考測試
// URL: https://codeforces.com/group/yifSBS4PJN/contest/417296/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 1e5 + 5;

long long a[MAXN], sum[MAXN];

int main() {
	int n, h;
	long long k;
	scanf("%d%d%lld", &n, &h, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", a + i);
		a[i] = min(max(a[i] - h, 0LL), k);
	}
	for (int i = 1; i <= n; i++) {
		fprintf(stderr, "%lld ", a[i]);
	}
	for (int i = 1; i <= n; i++) {
		sum[i] = sum[i - 1] + a[i];
	}
	int Q;
	scanf("%d", &Q);
	while (Q--) {
		int q;
		scanf("%d", &q);
		long long ans = min(sum[q] - sum[0], sum[n] - sum[q]);
		printf("%lld\n", ans);
	}
	return 0;
}