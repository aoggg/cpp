// Problem: B. Woeful Permutation
// Contest: Codeforces - Codeforces Round #813 (Div. 2)
// URL: https://codeforces.com/contest/1712/problem/B
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
		int n;
		cin >> n;
		if (n % 2 == 0) {
			for (int i = 1; i <= n; i++) {
				if (i != 1) {
					cout << ' ';
				}
				if (i % 2 == 0) {
					cout << i - 1;
				}
				else {
					cout << i + 1;
				}
			}
			cout << '\n';
		}
		else {
			for (int i = 1; i <= n; i++) {
				if (i == 1) {
					cout << 1;
				}
				else {
					cout << ' ';
					if (i % 2 == 0) {
						cout << i + 1;
					}
					else {
						cout << i - 1;
					}
				}
			}
			cout << '\n';
		}
	}
	return 0;
}