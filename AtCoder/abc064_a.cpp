// Problem: A - RGB Cards
// Contest: AtCoder - AtCoder Beginner Contest 064
// URL: https://atcoder.jp/contests/abc064/tasks/abc064_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int r, g, b;
	scanf("%*d%d%d", &g, &b);
	if ((g * 10 + b) % 4 == 0) {
		puts("YES");
	}
	else {
		puts("NO");
	}
	return 0;
}