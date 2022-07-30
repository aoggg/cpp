#include <iostream>
using namespace std;

long long ans = 0;
int m;
long long a[4][5001], sum[4][5001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> m;
	for (int i = 1; i <= 3; i++) {
		sum[i][0] = 0;
	}
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			sum[i][j] = a[i][j] + sum[i][j - 1];
		}
	}
	long long score = 0;
	for (int i = 1; i <= m; i++) {
		for (int j = i; j <= m; j++) {
			score = sum[1][i] + (sum[2][j] - sum[2][i - 1]) + (sum[3][m] - sum[3][j - 1]);
			ans = max(score, ans);
		} 
	}
	cout << ans << '\n';
	return 0;
}