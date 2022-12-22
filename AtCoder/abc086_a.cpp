// Problem: A - Product
// Contest: AtCoder - AtCoder Beginner Contest 086
// URL: https://atcoder.jp/contests/abc086/tasks/abc086_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a * b % 2 == 0) {
		puts("Even");
	}
	else {
		puts("Odd");
	}
	return 0;
}