// Problem: Minimizing Coins
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1634
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int c[101], coins[1000010];
bool visited[1000010];

int main() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	coins[0] = 0;
	for (int i = 1; i <= x; i++) {
		coins[i] = 1e9;
	}
	visited[0] = true;
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j < n; j++) {
			if (i >= c[j] && visited[i - c[j]]) {
				visited[i] = true;
				coins[i] = min(coins[i - c[j]] + 1, coins[i]);
			}
		}
	}
	int ans = -1;
	if (visited[x]) {
		ans = coins[x];
	}
	cout << ans << '\n';
	return 0;
}