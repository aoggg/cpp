// Problem: A - Order Something Else
// Contest: AtCoder - freee Programming Contest 2023（AtCoder Beginner Contest 310）
// URL: https://atcoder.jp/contests/abc310/tasks/abc310_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	int N, P, Q;
	scanf("%d%d%d", &N, &P, &Q);
	int D = 1e9;
	for (int i = 0; i < N; i++) {
		int dish;
		scanf("%d", &dish);
		D = min(D, dish);
	}
	printf("%d\n", min(D + Q, P));
	return 0;
}