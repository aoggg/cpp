// Problem: C - Snuke the Cookie Picker
// Contest: AtCoder - KYOCERA Programming Contest 2023（AtCoder Beginner Contest 305）
// URL: https://atcoder.jp/contests/abc305/tasks/abc305_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 505;

char grid[MAXN][MAXN];

int main() {
	int H, W;
	cin >> H >> W;
	int l = 1e9, r = -1e9, t = 1e9, d = -1e9;
	int ansx = -1, ansy = -1;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == '#') {
				l = min(j, l);
				r = max(j, r);
				t = min(i, t);
				d = max(i, d);
			}
		}
	}
	for (int i = t; i <= d && ansx == -1; i++) {
		for (int j = l; j <= r && ansy == -1; j++) {
			if (grid[i][j] == '.') {
				ansx = i + 1;
				ansy = j + 1;
			}
		}
	}
	cout << ansx << ' ' << ansy << '\n';
	return 0;
}