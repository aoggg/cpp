// Problem: C. 獎勵政策 (Reward Policy)
// Contest: Codeforces - Ten Point Round #31 (Div. 2, based on 111 學年度國立新化高級中學 學科能力競賽資訊科 - 校內初選 )
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/412932/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

const int MAXN = 2e5 + 5;

pair<long long, int> a[MAXN];
long long ans[MAXN], sum[MAXN];

int main() {
	int n;
	long long total = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i].first);
		a[i].second = i;
		total += a[i].first;
	}
	sort(a, a + n);
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		sum[i] = sum[i - 1] + a[i - 1].first;
	}
	for (int i = 0; i < n; i++) {
		int p = a[i].second;
		long long amount = total + (n - 1) * a[i].first; 
		long long diff = (a[i].first * (i + 1) - sum[i + 1]) + (sum[n] - sum[i + 1] - a[i].first * (n - i));
		ans[p] = amount + diff;
	}
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			printf(" ");
		}
		printf("%lld", ans[i]);
	}
	puts("");
	return 0;
}