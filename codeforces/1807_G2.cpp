// Problem: G2. Subsequence Addition (Hard Version)
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/G2
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

int c[MAXN];

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", c + i);
		}
		sort(c, c + n);
		ll sum = 1;
		bool possible = true;
		for (int i = 0; i < n; i++) {
			if (c[i] > sum) {
				possible = false;
				break;
			}
			if (i >= 1) {
				sum += c[i];
			}
			fprintf(stderr, "%d ", sum);
		}
		fprintf(stderr, "\n");
		if (possible) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
	return 0;
}