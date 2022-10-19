// Problem: 369 - Combinations
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=305
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 105;

int C[MAXN][MAXN];

int main() {
	int N, M;
	while (cin >> N >> M) {
		if (N == 0 && M == 0) {
			break;
		}
		C[0][0] = 1;
		for (int i = 1; i <= N; i++) {
			for (int j = 0; j <= min(N, M); j++) {
				if (j == 0) {
					C[i][j] = 1;
				}
				else {
					C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
				}
			}
		}
		cout << N<< " things taken " << M << " at a time is " << C[N][M] << " exactly.\n";
	}
	return 0;
}