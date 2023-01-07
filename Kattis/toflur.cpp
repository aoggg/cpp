// Problem: Töflur
// Contest: Kattis
// URL: https://open.kattis.com/problems/toflur
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e6 + 5;

long long a[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", a + i);
	}
	sort(a, a + n);
	long long ans = 0;
	for (int i = 0; i + 1 < n; i++) {
		long long num = a[i] - a[i + 1];
		ans += num * num;
	}
	printf("%lld\n", ans);
	return 0;
}