// Problem: A - Infinite Coins
// Contest: AtCoder - AtCoder Beginner Contest 088
// URL: https://atcoder.jp/contests/abc088/tasks/abc088_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int N, A;
	scanf("%d%d", &N, &A);
	if (N % 500 <= A) {
		puts("Yes");
	}
	else {
		puts("No");
	}
	return 0;
}