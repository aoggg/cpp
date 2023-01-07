// Problem: A - Range Product
// Contest: AtCoder - AtCoder Grand Contest 002
// URL: https://atcoder.jp/contests/agc002/tasks/agc002_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (0 >= a && 0 <= b) {
		puts("Zero");
	}
	else if (a > 0) {
		puts("Positive");
	}
	else {
		int num = abs(a - min(b, -1) + 1);
		if (num % 2 == 0) {
			puts("Positive");
		}
		else {
			puts("Negative");
		}
	}
	return 0;
}