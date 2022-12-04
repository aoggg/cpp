// Problem: D - Number of Multisets
// Contest: AtCoder - AtCoder Regular Contest 107
// URL: https://atcoder.jp/contests/arc107/tasks/arc107_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MOD = 998244353, MAXN = 3005;

int ways[MAXN][2 * MAXN];

int main() {
	int N, K;
	cin >> N >> K;
	ways[0][0] = 1;
	for (int i = 0; i <= N; i++) {
		for (int j = i; j >= 1; j--) {
			if (j > i) {
				ways[i][j] = 0;
			}
			else {
				ways[i][j] = (ways[i - 1][j - 1] + ways[i][2 * j]) % MOD;
			}
		}
	}
	cout << ways[N][K] << '\n';
	
	return 0;
}