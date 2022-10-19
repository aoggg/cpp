// Problem: A. Chip Game
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/contest/1719/problem/A
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
		int n, m;
		cin >> n >> m;
		if (n % 2 == m % 2) {
			cout << "Tonya\n";
		}
		else {
			cout << "Burenka\n";
		}
	}
	return 0;
}