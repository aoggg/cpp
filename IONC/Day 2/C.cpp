// Problem: C. 四色問題 (coloring)
// Contest: Codeforces - 2022 IONCamp Day2 練習賽
// URL: https://codeforces.com/group/z3GP4YeQl0/contest/391823/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long way[1000000][4]; //n - length, 4 - lastColour; (2 - gold, 3 - black)
bool visited[1000000][4];
int n;

int painting(int l, int colour) {
	if (visited[l][colour]) {
		return way[l][colour];
	}
	visited[l][colour] = true;
	if (l == 0) {
		return way[l][colour] = 1;
	}
	if (colour == 2) {
		for (int i = 0; i <= 2; i++) {
			way[l][colour] += painting(l - 1, i);
			way[l][colour] %= MOD;
		}
	}
	else if (colour == 3) {
		for (int i = 0; i <= 1; i++) {
			way[l][colour] += painting(l - 1, i);
			way[l][colour] %= MOD;
		}
		way[l][colour] += painting(l - 1, 3);
		way[l][colour] %= MOD;
	}
	else {
		for (int i = 0; i < 4; i++) {
			way[l][colour] += painting(l - 1, i);
			way[l][colour] %= MOD;
		}
	}
	return way[l][colour] %= MOD;
}

int main() {
	int q;
	cin >> q;
	while (q--) {
		cin >> n;
		long long ans = 0;
		for (int i = 0; i < 4; i++) {
			ans = (ans + painting(n - 1, i) % MOD) % MOD;
		}
		cout << ans << '\n';
	}
	return 0;
}