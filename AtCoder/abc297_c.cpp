// Problem: C - PC on the Table
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 105;

char room[MAXN][MAXN], ans[MAXN][MAXN];

int main() {
	int H, W;
	cin >> H >> W;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> room[i][j];
		}	
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (j + 1 < W && room[i][j] == room[i][j + 1] && room[i][j] == 'T') {
				ans[i][j] = 'P';
				ans[i][j + 1] = 'C';
				j++;
			}
			else {
				ans[i][j] = room[i][j];
			}
		}
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) cout << ans[i][j];
		cout << '\n';
	}
	return 0;
}