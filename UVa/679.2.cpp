// Problem: 679 - Dropping Balls
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=620&mosmsg=Submission+received+with+ID+28019622
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int D, I, ans = 1;
		cin >> D >> I;
		D--;
		I--;
		while (D--) {
			ans <<= 1;
			if ((I & 1) == 1) {
				ans += 1;
			}
			I >>= 1;
		}
		cout << ans << '\n';
	}
	return 0;
}