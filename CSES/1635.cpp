// Problem: Coin Combinations I
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1635
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int c[105], ways[1000010];
const int MOD = 1e9 + 7;

int main() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	ways[0] = 1;
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j < n; j++) {
			if (i >= c[j]) {
				ways[i] = (ways[i] + ways[i - c[j]]) % MOD;
			}
		}
	}
	cout << ways[x] << '\n';
	return 0;
}