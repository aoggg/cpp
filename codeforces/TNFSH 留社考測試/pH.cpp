// Problem: H. 狡猾(cunning)
// Contest: Codeforces - 留社考測試
// URL: https://codeforces.com/group/yifSBS4PJN/contest/417296/problem/H
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

void output(const int &i, const int &n, const int &x) {
	for (int timer = 0; timer < x; timer++) {
		for (int j = 0; j < (n - i) / 2; j++) {
			printf("*");
		}
		for (int j = 0; j < i; j++) {
			printf(".");
		}
		for (int j = 0; j < (n - i) / 2; j++) {
			printf("*");
		}
	}
	puts("");
}

int main() {
	int n, x, y;
	scanf("%d%d%d", &n, &x, &y);
	for (int i = 0; i < y; i++) {
		for (int i = 1; i <= n; i += 2) {
			output(i, n, x);
		}
		for (int i = n - 2; i >= 1; i -= 2) {
			output(i, n, x);
		}
	}
	return 0;
}