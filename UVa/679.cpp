// Problem: 679 - Dropping Balls
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=620
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int D, I, ans = 0;
		cin >> D >> I;
		I--;
		ans = (1 << (D - 1));
		for (int i = D - 2; i >= 0; i--) {
			ans |= ((I & 1) << i);
			I >>= 1;
		}
		cout << ans << '\n';
	}
	return 0;
}