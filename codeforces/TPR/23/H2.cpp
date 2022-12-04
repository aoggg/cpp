// Problem: H2. 區間求和問題 (Range Sum Queries)【Two-dimensional Version】
// Contest: Codeforces - Ten Point Round #23 (Div. 3)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/383582/problem/H2
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int a[2505][2505], sum[2505][2505];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			sum[i][j] = a[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
		}
	}
	int Q;
	cin >> Q;
	while (Q--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x1++, y1++, x2++, y2++;
		cout << sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1] << '\n';
	}
	return 0;
}