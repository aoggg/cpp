// Problem: Tower of Hanoi
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2165
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 15:06:40

#include <iostream>
using namespace std;

void hannoi(int n, int a, int b, int c) {
	if (n == 0) return;
	hannoi(n - 1, a, c, b);
	printf("%d %d\n", a, c);
	hannoi(n - 1, b, a, c);
}

int main() {
	int n;
	scanf("%d", &n);
	int ans = 1, nn = n, num = 2;
	while (nn) {
		if (nn & 1) ans *= num;
		num *= num;
		nn >>= 1;
	}
	printf("%d\n", ans - 1);
	hannoi(n, 1, 2, 3);
	return 0;
}