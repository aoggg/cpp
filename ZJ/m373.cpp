// ZJ m373

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 150000;

ll dp[MAXN][25];
ll money[MAXN];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> money[i];
	dp[0][0] = money[0];
	dp[0][1] = 0;
	ll win = max(dp[0][0], dp[0][1]);
	for (int i = 1; i < n; i++) {
		dp[i][0] = max(dp[i - 1][0], 0LL) + money[i];
		win = max(dp[i][0], win);
		for (int j = 1; j <= min(i + 1, k); j++) {
			dp[i][j] = max(dp[i - 1][j] + money[i], dp[i - 1][j - 1]);
			win = max(dp[i][j], win);
		}
	}
	cout << win << '\n';
	return 0;
}