// Problem: E. 空中花園 (Garden)
// Contest: Codeforces - 國立新化高級中學 111 學年度學科能力競賽 資訊科 TEST
// URL: https://codeforces.com/gym/394748/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 501;
const int MOD = 10;

int a[MAXN][MAXN][5], sum[MAXN][MAXN][5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= 4; i++) {
		sum[0][0][i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j][1];
			a[i][j][1] %= MOD;
			for (int k = 2; k <= 3; k++) {
				a[i][j][k] = a[i][j][k - 1] * a[i][j][k - 1] % MOD;
			}
			a[i][j][0] = a[i][j][3];
			for (int k = 0; k <= 3; k++) {
				sum[i][j][k] = (sum[i - 1][j][k] + sum[i][j - 1][k] - sum[i - 1][j - 1][k] + a[i][j][k]);
				// cout << sum[i][j][k] << ' ';
			}
			sum[i][j][0] = sum[i][j][3];
		}
	}
	// for (int i = 1; i <= 3; i++) {
		// int s = 0;
		// for (int j = 1; j <= n; j++) {
			// for (int k = 1; k <= m; k++) {
				// s += a[j][k][i];
				// cout << a[j][k][i] << ' ';
			// }
			// cout << '\n';
		// }
		// cout << s << '\n';
		// cout << '\n';
	// }
	int q;
	cin >> q;
	while (q--) {
		int x1, y1, x2, y2;
		long long t;
		cin >> x1 >> y1 >> x2 >> y2 >> t;
		if (t > 3) {
			t = 3;
		}
		cout << (sum[x2][y2][t] - (sum[x1 - 1][y2][t] + sum[x2][y1 - 1][t] - sum[x1 - 1][y1 - 1][t])) % 10 << '\n';
	}
	return 0;
}