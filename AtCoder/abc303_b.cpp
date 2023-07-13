// Problem: B - Discord
// Contest: AtCoder - NS Solutions Corporation Programming Contest 2023（AtCoder Beginner Contest 303）
// URL: https://atcoder.jp/contests/abc303/tasks/abc303_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 55;

bool mood[MAXN][MAXN];
int people[MAXN][MAXN];

int main() {
	int N, M;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &people[i][j]);
			if (j != 0) mood[min(people[i][j - 1], people[i][j])][max(people[i][j - 1], people[i][j])] = true;
		}
	}
	int ans = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = i + 1; j <= N; j++) {
			if (!mood[i][j]) ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}