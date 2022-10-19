// Problem: D. 刪除遊戲 (Game)
// Contest: Codeforces - 國立新化高級中學 111 學年度學科能力競賽 資訊科 TEST
// URL: https://codeforces.com/gym/394748/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 2001;

int a[MAXN], gcd[MAXN][MAXN];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (j == i) {
				gcd[i][j] = a[i];
			}
			else {
				gcd[i][j] = __gcd(a[j], gcd[i][j - 1]);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i + 1 < n; i++) {
		int xi = 0;
		if (i != 0) {
			xi = gcd[0][i - 1];
		}
		for (int j = i + 1; j < n; j++) {
			int xj = xi;
			if (j == i + 1) {
				if (xj == 0) {
					if (j + 1 != n) {
						xj = gcd[j + 1][n - 1];
					}
				}
				else {
					if (j + 1 != n) {
						xj = __gcd(xj, gcd[j + 1][n - 1]);
					}
				}
			}
			else {
				if (xj == 0) {
					xj = gcd[i + 1][j - 1];
					// cout << "i " << i << " j " << j << '\n';
					// cout << x << '\n';
				}
				else {
					xj = __gcd(xj, gcd[i + 1][j - 1]);
				}
				if (j + 1 != n) {
					xj = __gcd(xj, gcd[j + 1][n - 1]);	
				}
			}
			// cout << x << ' ';
			ans = max(ans, xj);
			// xj = 0;
		}
	}
	// cout << '\n';
	cout << ans << '\n';
	return 0;
}