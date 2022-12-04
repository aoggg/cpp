// Problem: Grid Paths
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1638
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

string mp[1000];
int path[1000][1000];

const int MOD = 1e9 + 7;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> mp[i];
	}
	if (mp[0][0] == '*') {
		path[0][0] = 0;
	}
	else {
		path[0][0] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mp[i][j] != '*') {
				if (i != 0) {
					path[i][j] += path[i - 1][j];
					path[i][j] %= MOD;
				}
				if (j != 0) {
					path[i][j] += path[i][j - 1];
					path[i][j] %= MOD;
				}
			}
		}
	}
	cout << path[n - 1][n - 1] << '\n';
	return 0;
}