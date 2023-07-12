// Problem: A - Nine
// Contest: AtCoder - Denso Create Programming Contest 2023 (AtCoder Beginner Contest 309)
// URL: https://atcoder.jp/contests/abc309/tasks/abc309_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	int A, B;
	scanf("%d%d", &A, &B);
	if (B - A == 1 && B / 3 == A / 3 && A % 3 != 0 && B % 3 != 0) puts("Yes");
	else if (B - A == 1 && B % 3 == 0 && B / 3 - 1 == A / 3) puts("Yes");
	else puts("No");
	return 0;
}