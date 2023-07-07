// Problem: A - Double Click
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	int N, D;
	scanf("%d%d", &N, &D);
	cerr << N << ' ' << D << '\n';
	int now, last;
	scanf("%d", &last);
	int ans = -1;
	for (int i = 1; i < N; i++) {
		scanf("%d", &now);
		if (now - last <= D && ans == -1) {
			ans = now;
		}
		last = now;
	}
	printf("%d\n", ans);
	return 0;
}