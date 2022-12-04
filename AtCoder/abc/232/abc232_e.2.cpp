// Problem: E - Rook Path
// Contest: AtCoder - M-SOLUTIONS Programming Contest 2021(AtCoder Beginner Contest 232)
// URL: https://atcoder.jp/contests/abc232/tasks/abc232_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using place = long long(*)[4];

const long long MOD = 998244353;

long long basic[4][4], transfer[4][4], ways[4];

void multiple(place matrix1, place matrix2) {
	long long m[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			long long num = 0;
			for(int k = 0; k < 4; k++) {
				num += matrix1[i][k] * matrix2[k][j] % MOD;
				num %= MOD;
			}
			m[i][j] = num;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			matrix2[i][j] = m[i][j];
		}
	}
} 

int main() {
	long long H, W, K;
	cin >> H >> W >> K;
	// H %= MOD;
	// W %= MOD;
	long long x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	for (int i = 0; i < 4; i++) {
		basic[i][i] = 1;
		ways[i] = 0;
	}
	if (x1 == x2 && y1 == y2) {
		ways[0] = 1;
	}
	else if (y1 == y2) {
		ways[1] = 1;
	}
	else if (x1 == x2) {
		ways[2] = 1;
	}
	else {
		ways[3] = 1;
	}
	transfer[0][1] = 1;
	transfer[0][2] = 1;
	transfer[1][0] = H - 1;
	transfer[1][1] = H - 2;
	transfer[1][3] = 1;
	transfer[2][0] = W - 1;
	transfer[2][2] = W - 2;
	transfer[2][3] = 1;
	transfer[3][1] = W - 1;
	transfer[3][2] = H - 1;
	transfer[3][3] = H + W - 4;
	while (K) {
		place tp = transfer, bp = basic;
		if ((K & 1) == 1) {
			multiple(tp, bp);
		}
		multiple(tp, tp);
		K >>= 1;
	}
	long long ans = 0;
	for (int i = 0; i < 4; i++) {
		ans += ways[i] * basic[0][i] % MOD;
		ans %= MOD;
	}
	cout << ans << '\n';
	return 0;
}