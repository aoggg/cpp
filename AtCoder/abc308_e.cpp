// Problem: E - MEX
// Contest: AtCoder - AtCoder Beginner Contest 308
// URL: https://atcoder.jp/contests/abc308/tasks/abc308_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;
const string MEX = "MEX";
const int M = 0, E = 1, X = 2;

ll A[MAXN], dp[3][8];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	string s;
	cin >> s;
	for (int i = 0; i < N; i++) {
		int n;
		for (n = 0; n < MEX.size(); n++) {
			if (s[i] == MEX[n]) break;
		}
		if (n == M) dp[M][(1 << A[i])]++;
		else {
			for (int j = 1; j <= 7; j++) {
				dp[n][(j | (1 << A[i]))] += dp[n - 1][j];
			}
		}
	}
	for (int i = 1; i <= 7; i++) cerr << dp[X][i] << '\n';
	ll ans = 0;
	ans = dp[X][1] + 2 * dp[X][3] + dp[X][5] + 3 * dp[X][7];
	cout << ans << '\n';
	return 0;
}