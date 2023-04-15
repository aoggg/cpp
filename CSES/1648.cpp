// Problem: Dynamic Range Sum Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1648
// Memory Limit: 512 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll x[MAXN];
int n;

struct FenwickTree {
	ll sum[2 * MAXN];
	
	void upd(int pos, ll val) {
		for (int i = pos; i <= n; i += i & -i) {
			sum[i] += val;
		}
	}
	
	ll query(int pos) {
		ll res = 0;
		for (int i = pos; i > 0; i -= i & -i) {
			res += sum[i];
		}
		return res;
	}
} BIT;

int main() {
	int q;
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", x + i);
		BIT.upd(i, x[i]);
	}
	while (q--) {
		int type;
		scanf("%d", &type);
		switch (type) {
			case 1:
				int k;
				ll u;
				scanf("%d%lld", &k, &u);
				BIT.upd(k, u - x[k]);
				x[k] = u;
				break;
			case 2:
				int a, b;
				scanf("%d%d", &a, &b);
				printf("%lld\n", BIT.query(b) - BIT.query(a - 1));
				break;
		}
	}
	return 0;
}