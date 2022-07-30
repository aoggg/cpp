#include <iostream>
#include <iomanip>
using namespace std;

double dp[105][10];

int main() {
	cout << fixed << setprecision(5);
	int k, n;
	while (cin >> k >> n) {
		double amount = 1;
		for (int i = 0; i < n; i++) {
			amount *= (k + 1);
		}
		double total = 0;
		for (int i = 0; i <= k; i++) {
			dp[0][i] = 1;
		}
		for (int i = 1; i < n; i++) {
			for (int j = 0; j <= k; j++) {
				if (j == 0) {
					dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1];
				}
				else if (j == k) {
					dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
				}
				else {
					dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1];
				}
			}
		}
		for (int i = 0; i <= k; i++) {
			total += dp[n - 1][i];
		}
		cout << total * 100 / amount << '\n';
	}
	return 0;
}