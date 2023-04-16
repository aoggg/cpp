// Problem: A. 金幣
// Contest: Codeforces - 台南高中競技程式練盟練習賽-四月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/438246/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
using ll = long long;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	ll total = 0;
	for (int i = 0; i < n; i++) {
		ll money;
		scanf("%lld", &money);
		total += money;
	}
	if (total < k) {
		puts("0");
	}
	else {
		printf("%lld\n", total % k);
	}
	return 0;
}