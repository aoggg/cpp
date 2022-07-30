#include <iostream>
using namespace std;

long long ans = 0;
int n, m;
long long a[25][25];

void walking(long long score, int i, int j) {
	if (i > n || j > m) {
		return;
	}
	if (i == n && j == m) {
		ans = max(ans, score);
		return;
	}
	walking (score + a[i + 1][j], i + 1, j);
	walking (score + a[i][j + 1], i, j + 1);
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	walking(a[1][1], 1, 1);
	cout << ans << '\n';
	return 0;
}