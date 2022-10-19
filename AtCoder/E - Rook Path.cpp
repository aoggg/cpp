// Problem: E - Rook Path
// Contest: AtCoder - M-SOLUTIONS Programming Contest 2021(AtCoder Beginner Contest 232)
// URL: https://atcoder.jp/contests/abc232/tasks/abc232_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const long long MOD = 998244353, MAXN = 1e6 + 5;

long long ways[MAXN][4];

int main() {
	long long H, W, K;
	cin >> H >> W >> K;
	long long x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2 && y1 == y2) {
		ways[0][0] = 1;
	}
	else if (x1 == x2) {
		ways[0][2] = 1;
	}
	else if (y1 == y2) {
		ways[0][1] = 1;
	}
	else {
		ways[0][3] = 1;
	}
	for (int i = 1; i <= K; i++) {
		ways[i][0] = (ways[i - 1][1] + ways[i - 1][2]) % MOD;
		ways[i][1] = (((H - 1) * ways[i - 1][0] % MOD + (H - 2) * ways[i - 1][1] % MOD) % MOD + ways[i - 1][3]) % MOD;
		ways[i][2] = (((W - 1) * ways[i - 1][0] % MOD + (W - 2) * ways[i - 1][2] % MOD) % MOD + ways[i - 1][3]) % MOD;
		ways[i][3] = (((W - 1) * ways[i - 1][1] % MOD + (H - 1) * ways[i - 1][2] % MOD) % MOD + (H + W - 4) * ways[i - 1][3] % MOD) % MOD; 
	}
	cout << ways[K][0] << '\n';
	return 0;
}