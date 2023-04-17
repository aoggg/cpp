// TOJ 673

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 1e5 + 5;

ll a[MAXN], sum[MAXN];

int main() {
	int n, h; 
	ll k;
	scanf("%d%d%lld", &n, &h, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", a + i);
		sum[i] = sum[i - 1] + min(max(a[i] - h, 0LL), k);
	}
	int Q;
	scanf("%d", &Q);
	while (Q--) {
		int q;
		scanf("%d", &q);
		printf("%lld\n", min(sum[q], sum[n] - sum[q]));
	}
	return 0;
}