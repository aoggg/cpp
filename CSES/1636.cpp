// Problem: Coin Combinations II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1636
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int c[101], ways[1000001][2];

const int MOD = 1e9 + 7;

int main() {
	int n, x;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	ways[0][0] = 1;
	ways[0][1] = 1;
	for (int j = 1; j <= n; j++) {
		for (int i = 0; i <= x; i++) {
			ways[i][j % 2] = ways[i][(j + 1) % 2];
			if (i >= c[j]) {
				ways[i][j % 2] += ways[i - c[j]][j % 2];
				ways[i][j % 2] %= MOD;
			}
		}
	}
	cout << ways[x][n % 2] << '\n';
	return 0;
}