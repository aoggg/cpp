// Problem: Dice Combinations
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1633
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int ways[1000000];

const int MOD = 1e9 + 7;

int main() {
	int n;
	cin >> n;
	ways[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i >= j) {
				ways[i] = (ways[i] + ways[i - j]) % MOD;
			}
		}
	}
	cout << ways[n] % MOD << '\n';
	return 0;
}