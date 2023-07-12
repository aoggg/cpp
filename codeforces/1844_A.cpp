// Problem: A. Subtraction Game
// Contest: Codeforces - Codeforces Round  884 (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1844/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}