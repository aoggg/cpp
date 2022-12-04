// Problem: C. Odd/Even Increments
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int a[50], m[2];

int main() {
	int t;
	cin >> t;
	while (t--) {
		bool possible = true;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			a[i] %= 2;
			if (i == 0 || i == 1) {
				m[i] = a[i];
			}
			if (m[i % 2] != a[i]) {
				possible = false;
			} 
		}
		if (possible) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}