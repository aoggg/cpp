// Problem: A - Water Station
// Contest: AtCoder - KYOCERA Programming Contest 2023（AtCoder Beginner Contest 305）
// URL: https://atcoder.jp/contests/abc305/tasks/abc305_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	if (N % 5 == 0) printf("%d\n", N);
	else if (N % 5 <= 2) printf("%d\n", N / 5 * 5);
	else printf("%d\n", (N / 5 + 1) * 5);
	return 0;
}