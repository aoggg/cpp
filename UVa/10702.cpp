// Problem: 10702 - Travelling Salesman
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1643
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

const int MAXN = 105, MAXT = 1005;

int money[MAXN][MAXN], gain[MAXN][MAXT];

int main() {
	int C, S, E, T;
	while (cin >> C >> S >> E >> T) {
		
		if (C == 0 && S == 0 && E == 0 && T == 0) {
			break;
		}
		
		//init
		for (int i = 0; i < MAXN; i++) {
			for (int j = 0; j < MAXT; j++) {
				gain[i][j] = -1e9;
			}	
		}
		for (int i = 0; i < C; i++) {
			for (int j = 0; j < C; j++) {
				cin >> money[i][j];
			}
		}
		S--;
		for (int i = 0; i < C; i++) {
			gain[i][1] = money[S][i];
		}
		
		//travelling
		for (int i = 2; i <= T; i++) {
			for (int j = 0; j < C; j++) {
				for (int k = 0; k < C; k++) {
					if (k == j) {
						continue;
					}
					gain[j][i] = max(gain[j][i], gain[k][i - 1] + money[k][j]);
				}
			}
		}
		
		int ans = -1e9;
		while (E--) {
			int city;
			cin >> city;
			city--;
			ans = max(ans, gain[city][T]);
		}
		cout << ans << '\n';
	}
	return 0;
}