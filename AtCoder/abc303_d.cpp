// Problem: D - Shift vs. CapsLock
// Contest: AtCoder - NS Solutions Corporation Programming Contest 2023（AtCoder Beginner Contest 303）
// URL: https://atcoder.jp/contests/abc303/tasks/abc303_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 3e5 + 5;
const int OFF = 0, ON = 1;

ll dp[MAXN][2];

int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	string S;
	cin >> S;
	if (S[0] == 'a') {
		dp[0][OFF] = X;
		dp[0][ON] = Y + Z;
	}
	else {
		dp[0][OFF] = Y;
		dp[0][ON] = X + Z;
	}
	for (int i = 1; i < S.size(); i++) {
		if (S[i] == 'a') {
			dp[i][ON] = min(dp[i - 1][ON] + Y, dp[i - 1][OFF] + Z + Y);
			dp[i][OFF] = min(dp[i - 1][ON] + Z + X, dp[i - 1][OFF] + X);
		}
		else {
			dp[i][ON] = min(dp[i - 1][ON] + X, dp[i - 1][OFF] + Z + X);
			dp[i][OFF] = min(dp[i - 1][ON] + Z + Y, dp[i - 1][OFF] + Y);
		}
	}
	cout << min(dp[S.size() - 1][ON], dp[S.size() - 1][OFF]) << '\n';
	return 0;
}