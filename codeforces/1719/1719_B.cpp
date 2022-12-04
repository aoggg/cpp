// Problem: B. Mathematical Circus
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/contest/1719/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		bool possible = false;
		if (k % 2 == 1) {
			cout << "YES\n";
			for (int i = 1; i <= n; i += 2) {
				cout << i << ' ' << i + 1 << '\n';
			}
		}
		else {
			if (k % 4 == 2) {
				cout << "YES\n";
				for (int i = 1; i <= n; i += 2) {
					if ((i + 1) % 4 == 2) {
						cout << i + 1 << ' ' << i << '\n';
					}
					else {
						cout << i << ' ' << i + 1 << '\n';
					}
				}
			}
			else {
				cout << "NO\n";
			}
		}
	}
	return 0;
}