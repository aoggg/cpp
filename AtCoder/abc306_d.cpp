// Problem: D - Poisonous Full-Course
// Contest: AtCoder - Toyota Programming Contest 2023#3（AtCoder Beginner Contest 306）
// URL: https://atcoder.jp/contests/abc306/tasks/abc306_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 3e5 + 5;
const int UPSET = 1;
const int HEALTH = 0;

ll dp[MAXN][2];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		bool poison;
		ll tastiness;
		cin >> poison >> tastiness;
		if (poison) {
			dp[i][UPSET] = max(dp[i - 1][UPSET], dp[i - 1][HEALTH] + tastiness);
			dp[i][HEALTH] = dp[i - 1][HEALTH];
		}
		else {
			dp[i][UPSET] = dp[i - 1][UPSET];
			dp[i][HEALTH] = max(max(dp[i - 1][HEALTH], dp[i - 1][HEALTH] + tastiness), dp[i - 1][UPSET] + tastiness);
		}
	}
	cout << max(dp[N][HEALTH], dp[N][UPSET]) << '\n';
	return 0;
}