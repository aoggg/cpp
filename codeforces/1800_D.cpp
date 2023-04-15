// Problem: D. Remove Two Letters
// Contest: Codeforces - Codeforces Round 855 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1800/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;
char s[MAXN];

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		scanf("%s", &s);
		int ans = n - 1;
		for (int i = 0; i + 2 < n; i++) {
			if (s[i] == s[i + 2]) {
				ans--;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}