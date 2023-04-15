// Problem: B. Block Towers
// Contest: Codeforces - Educational Codeforces Round 140 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1767/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll a[MAXN];

void print(int n) {
	for (int i = 0; i < n; i++) {
		fprintf(stderr, "%lld ", a[i]);
	}
	fprintf(stderr, "\n"); 
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		ll ans;
		scanf("%lld", &ans);
		n--;
		for (int i = 0;  i < n; i++) {
			scanf("%lld", a + i);
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++) {
			if (a[i] > ans) {
				ans += (a[i] - ans + 1) / 2;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}