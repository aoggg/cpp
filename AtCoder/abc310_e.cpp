// Problem: E - NAND repeatedly
// Contest: AtCoder - freee Programming Contest 2023（AtCoder Beginner Contest 310）
// URL: https://atcoder.jp/contests/abc310/tasks/abc310_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 1e6 + 5;

int dp[MAXN][2];

int main() {
	int N;
	cin >> N;
	string s;
	cin >> s;
	ll ans = 0;
	if (s[0] == '0') {
		dp[0][0] = 1;
	}
	else {
		dp[0][1] = 1;
		ans++;
	}
	for (int i = 1; i < N; i++) {
		if (s[i] == '0') {
			dp[i][1] = dp[i - 1][0] + dp[i - 1][1];
			dp[i][0] = 1;
		}
		else {
			dp[i][1] = dp[i - 1][0] + 1;
			dp[i][0] = dp[i - 1][1];
		}
		ans += dp[i][1];
	}
	cout << ans << '\n';
	return 0;
}