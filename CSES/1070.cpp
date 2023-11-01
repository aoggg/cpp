// Problem: Permutations
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1070
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 08:28:23

#include <iostream>
using namespace std;

const int MAXN = 1e6 + 5;

int ans[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	if (n == 1) puts("1");
	else if (n <= 3) puts("NO SOLUTION");
	else if (n % 2 == 1) {
		for (int i = 1; i <= n / 2; i++) {
			if (i % 2 == 0) {
				ans[i] = i;
				ans[n - i + 1] = n - i;
			}
			else {
				ans[n - i + 1] = i;
				ans[i] = n - i;
			}
		}
		ans[(n + 1) / 2] = n;
		for (int i = 1; i <= n; i++) {
			if (i != 1) printf(" ");
			printf("%d", ans[i]);
		}
		puts("");
	}
	else {
		for (int i = 2, now = 1; i <= n / 2; i++, now++) {
			if (i % 2 == 0) {
				ans[now] = i;
				ans[n - now + 1] = n + 1 - i;
			}
			else {
				ans[n - now + 1] = i;
				ans[now] = n + 1 - i;
			}
		}
		ans[n / 2] = 1;
		ans[n / 2 + 1] = n;
		if (n / 2 % 2 == 0) swap(ans[n / 2], ans[n / 2 + 1]);
		for (int i = 1; i <= n; i++) {
			if (i != 1) printf(" ");
			printf("%d", ans[i]);
		}
		puts("");
	}
	return 0;
}