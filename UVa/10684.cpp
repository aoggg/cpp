// Problem: 10684 - The jackpot
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1625
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

const int MAXN = 10005;

int money[MAXN], wins[MAXN];

int main() {
	int N;
	while (cin >> N) {
		if (N == 0) {
			break;
		}
		int ans = 0;
		for (int i = 1; i <= N; i++) {
			cin >> money[i];
			wins[i] = max(wins[i - 1] + money[i], money[i]);
		}
		for (int i = 1; i <= N; i++) {
			ans = max(wins[i], ans);
		}
		if (ans > 0) {
			cout << "The maximum winning streak is " << ans << ".\n";
		}
		else {
			cout << "Losing streak.\n";
		}
	}
	return 0;
}