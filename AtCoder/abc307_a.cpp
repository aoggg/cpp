// Problem: A - Weekly Records
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 307)
// URL: https://atcoder.jp/contests/abc307/tasks/abc307_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	bool FT = true;
	while (N--) {
		int ans = 0;
		int day = 7;
		while (day--) {
			int steps;
			scanf("%d", &steps);
			ans += steps;
		}
		if (!FT) printf(" ");
		printf("%d", ans);
		FT = false;
	}
	puts("");
	return 0;
}