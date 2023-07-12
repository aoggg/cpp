// Problem: B - Rotate
// Contest: AtCoder - Denso Create Programming Contest 2023 (AtCoder Beginner Contest 309)
// URL: https://atcoder.jp/contests/abc309/tasks/abc309_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 105;

char A[MAXN][MAXN];
int N;

bool frame(int x, int y) {
	if (x == 0 || y == 0 || x == N - 1 || y == N - 1) return true;
	return false;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!frame(i, j)) cin >> A[i][j];
			else if (i == 0 && j != N - 1) cin >> A[i][j + 1];
			else if (j == N - 1 && i != N - 1) cin >> A[i + 1][j];
			else if (i == N - 1 && j != 0) cin >> A[i][j - 1];
			else cin >> A[i - 1][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << A[i][j];
		}
		cout << '\n';
	}
	return 0;
}