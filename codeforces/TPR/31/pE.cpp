// Problem: E. 空中花園 (Garden)
// Contest: Codeforces - Ten Point Round #31 (Div. 2, based on 111 學年度國立新化高級中學 學科能力競賽資訊科 - 校內初選 )
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/412932/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 505;
const int MOD = 10;

int a[MAXN][MAXN][5], sum[MAXN][MAXN][5];

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j][1]);
			a[i][j][1] %= MOD;
			for (int k = 2; k <= 3; k++) {
				sum[i][j][k] = 0;
				a[i][j][k] = a[i][j][k - 1] * a[i][j][k - 1] % MOD;
			}
			for (int k = 1; k <= 3; k++) {
				sum[i][j][k] = (sum[i - 1][j][k] + sum[i][j - 1][k] - sum[i - 1][j - 1][k] + a[i][j][k]);
			}
			
		}
	}
	int q;
	scanf("%d", &q);
	while (q--) {
		int x1, y1, x2, y2, t;
		scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &t);
		t = min(t, 3);
		printf("%d\n", (sum[x2][y2][t] - (sum[x1 - 1][y2][t] + sum[x2][y1 - 1][t] - sum[x1 - 1][y1 - 1][t])) % MOD);
	}
	return 0;
}