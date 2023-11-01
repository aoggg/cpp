// Problem: Coin Piles
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1754
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 14:35:18

#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		if ((a + b) % 3 != 0) puts("NO");
		else if (min(a, b) < (a + b) / 3) puts("NO");
		else puts("YES");
	}
	return 0;
}