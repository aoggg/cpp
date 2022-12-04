// Problem: Trailing Zeros
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1618/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while (n != 0) {
		ans += n / 5;
		n /= 5;
	}
	cout << ans << '\n';
	return 0;
}