// Problem: C - Centers
// Contest: AtCoder - Toyota Programming Contest 2023#3（AtCoder Beginner Contest 306）
// URL: https://atcoder.jp/contests/abc306/tasks/abc306_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
using pii = pair<int, int>;

const int MAXN = 1e5 + 5;

pii f[MAXN];
int appeared[MAXN];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= 3 * N; i++) {
		int a;
		scanf("%d", &a);
		appeared[a]++;
		if (appeared[a] == 2) {
			f[a - 1] = {i, a};
		}
	}
	sort(f, f + N);
	for (int i = 0; i < N; i++) {
		if (i != 0) printf(" ");
		printf("%d", f[i].second);
	}
	puts("");
	return 0;
}