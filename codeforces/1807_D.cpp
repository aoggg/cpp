// Problem: D. Odd Queries
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5;

ll a[MAXN], sum[MAXN];

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, q;
		scanf("%d%d", &n, &q);
		for (int i = 1; i <= n; i++) {
			scanf("%lld", a + i);
			sum[i] = sum[i - 1] + a[i];
		}
		while (q--) {
			bool odd = (sum[n] % 2 != 0);
			int l, r, k;
			scanf("%d%d%d", &l, &r, &k);
			int diff = sum[r] - sum[l - 1] - (ll)((r - l + 1)) * k;
			if (diff & 1) {
				odd = !odd;
			}
			if (odd) {
				puts("YES");
			}
			else {
				puts("NO");
			}
		}
	}
	return 0;
}