// Problem: A. Plus or Minus
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (a + b == c) {
			puts("+");
		}
		else {
			puts("-");
		}
	}
	return 0;
}