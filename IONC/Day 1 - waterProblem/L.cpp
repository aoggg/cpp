// Problem: L. Even Substrings
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/L
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (((s[i - 1] - '0') & 1) == 0) {
			ans += i;
		}
	}
	cout << ans << '\n';
	return 0;
}