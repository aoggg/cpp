// Problem: A. Crossmarket
// Contest: Codeforces - Codeforces Round #816 (Div. 2)
// URL: https://codeforces.com/contest/1715/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		if (n > m) {
			swap(n, m);
		}
		if (n == m && n == 1) {
			cout << 0 << '\n';
		}
		else {
			cout << (n + m - 2) * 2 - m + 1 + 1 << '\n'; 
		}
	}
	return 0;
}