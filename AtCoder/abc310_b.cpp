// Problem: B - Strictly Superior
// Contest: AtCoder - freee Programming Contest 2023（AtCoder Beginner Contest 310）
// URL: https://atcoder.jp/contests/abc310/tasks/abc310_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 105;

int P[MAXN];
bool function[MAXN][MAXN];
int M;

bool check(int a, int b) {
	bool moref = false;
	if (P[a] < P[b]) return false;
	for (int i = 1; i <= M; i++) {
		if (!function[a][i] && function[b][i]) moref = true;
		else if (function[a][i] && !function[b][i]) return false;
	}
	if (P[a] > P[b]) return true;
	else if (moref) return true;
	return false;
}

int main() {
	int N;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", P + i);
		int C;
		scanf("%d", &C);
		for (int j = 0; j < C; j++) {
			int F;
			scanf("%d", &F);
			function[i][F] = true;
		}
	}
	bool superior = false;
	for (int i = 0; i + 1 < N && !superior; i++) {
		for (int j = i + 1; j < N; j++) {
			if (check(i, j) || check(j, i)) {
				superior = true;
				break;
			}
		}
	}
	if (superior) puts("Yes");
	else puts("No");
	return 0;
}