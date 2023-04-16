// Problem: C. 大雨
// Contest: Codeforces - 台南高中競技程式練盟練習賽-四月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/438246/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

int lh[MAXN], rh[MAXN], a[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", a + i);
	}
	for (int i = 1; i <= n; i++) {
		lh[i] = max(lh[i - 1], a[i - 1]);
	}
	for (int i = n; i >= 1; i--) {
		rh[i] = max(rh[i + 1], a[i + 1]);
	}
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += max(min(lh[i], rh[i]) - a[i], 0);
	}
	printf("%lld\n", ans);
	return 0;
}