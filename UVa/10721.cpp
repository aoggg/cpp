// Problem: 10721 - Bar Codes
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1662
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

const int MAXN = 55;

long long ways[MAXN][MAXN][MAXN];

int main() {
	int n, k, m;
	while (cin >> n >> k >> m) {
		for (int i = 0; i < MAXN; i++) {
			for (int j = 0; j < MAXN; j++) {
				for (int l = 0; l < MAXN; l++) {
					ways[i][j][l] = 0;
				}
			}
		}
		ways[1][1][1] = 1;
		
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= k; j++) {
				for (int l = 1; l <= m; l++) {
					if (l == 1) {
						for (int ii = 1; ii <= m; ii++) {
							ways[i][j][l] += ways[i - 1][j - 1][ii];
						}
					}
					else {
						ways[i][j][l] = ways[i - 1][j][l - 1];
					}
				}
			}
		}
		
		long long ans = 0;
		for (int i = 1; i <= m; i++) {
			ans += ways[n][k][i];
		}
		cout << ans << '\n';
	}
	return 0;
}