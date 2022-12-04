// Problem: Counting Divisors
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1713
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		int x;
		cin >> x;
		int n = sqrt(x);
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (x % i == 0) {
				ans += 2;
			}
		}
		if (n * n == x) {
			ans--;
		}
		cout << ans << '\n';
	}
	return 0;
}