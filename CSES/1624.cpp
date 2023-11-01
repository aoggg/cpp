// Problem: Chessboard and Queens
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1624
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 15:16:21

#include <iostream>
using namespace std;

const int MAXN = 10;

string board[MAXN];
bool column[MAXN], visited[MAXN][MAXN];
int ans = 0;

bool check(int x, int y) {
	if (board[x][y] == '*') return false;
	if (column[y]) return false;
	for (int i = 1; i <= min(x, y); i++) {
		if (visited[x - i][y - i]) return false;
	}
	for (int i = 1; i <= min(x, 8 - 1 - y); i++) {
		if (visited[x - i][y + i]) return false;
	}
	return true;
}

void play(int n) {
	if (n == 8) {
		ans++;
		return;
	}
	for (int i = 0; i < 8; i++) {
		if (check(n, i)) {
			column[i] = true;
			visited[n][i] = true;
			play(n + 1);
			column[i] = false;
			visited[n][i] = false;
		}
	}
}

int main() {
	for (int i = 0; i < 8; i++) cin >> board[i];
	play(0);
	printf("%d\n", ans);
	return 0;
}