// Problem: E. 上廁所(toilet)
// Contest: Codeforces - 留社考測試
// URL: https://codeforces.com/group/yifSBS4PJN/contest/417296/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	long long ans = n;
	for (int i = 2; i <= n; i++) {
		ans += i;
	}
	printf("%lld\n", ans);
	for (int i = 1; i <= n; i++) {
		if (i != 1) {
			printf(" ");
		}
		printf("%d", i);
	}
	puts("");
	return 0;
}