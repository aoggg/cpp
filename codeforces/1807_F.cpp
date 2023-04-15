// Problem: F. Bouncy Ball
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

const int MAXN = 25005;
const string DIR[] = {"DR", "DL", "UR", "UL"};
const int MX[] = {1, 1, -1, -1}, MY[] = {1, -1, 1, -1};

bool visitny[MAXN][4]; //visit[n][y];
bool visit1y[MAXN][4]; //visit[1][y];
bool visitxm[MAXN][4]; //visit[x][m];
bool visitx1[MAXN][4]; //visit[x][1];
int n, m, i1, j1, d;

void init() {
	for (int i = 1; i <= max(n, m); i++) {
		for (int j = 0; j < 4; j++) {
			visitny[i][j] = false;
			visit1y[i][j] = false;
			visitxm[i][j] = false;
			visitx1[i][j] = false;
		}
	}
	return;
}

int dtn(int mx, int my) { //dir to num
	for (int i = 0; i < 4; i++) {
		if (MX[i] == mx && MY[i] == my) {
			return i;
		}
	}
}

int bounce(int x, int y, int times, int dir, const int &X, const int &Y) {
	if (times != 0) {
		if (x == n) {
			if (visitny[y][dir]) return -1;
			visitny[y][dir] = true;
		}
		else if (x == 1) {
			if (visit1y[y][dir]) return -1;
			visit1y[y][dir] = true;
		}
		else if (y == m) {
			if (visitxm[x][dir]) return -1;
			visitxm[x][dir] = true;
		}
		else {
			if (visitx1[x][dir]) return -1;
			visitx1[x][dir] = true;
		}
	}
	if (MX[dir] * (X - x) >= 0 && MY[dir] * (Y - y) >= 0) {
		if (abs(X - x) == abs(Y - y)) {
			return times;
		}
	}
	if (MX[dir] == MY[dir]) {
		if (MX[dir] == 1) { // 1, 1
			if (n - x == m - y) {
				return bounce(n, m, times + 1, dtn(-MX[dir], -MY[dir]), X, Y);
			}
			else if (n - x < m - y) { //mx to -mx 
				return bounce(n, y + n - x, times + 1, dtn(-MX[dir], MY[dir]), X, Y);
			}
			else {
				return bounce(x + m - y, m, times + 1, dtn(MX[dir], -MY[dir]), X, Y);
			}
		}
		else {
			if (x == y) {
				return bounce(1, 1, times + 1, dtn(-MX[dir], -MY[dir]), X, Y);
			}
			else if (x - 1 < y - 1) {
				return bounce(1, y + 1 - x, times + 1, dtn(-MX[dir], MY[dir]), X, Y);
			}
			else {
				return bounce(x + 1 - y, 1, times + 1, dtn(MX[dir], -MY[dir]), X, Y);
			}
		}
	}
	else {
		if (MX[dir] == 1) { // 1 -1
			if (n - x == y - 1) {
				return bounce(n, 1, times + 1, dtn(-MX[dir], -MY[dir]), X, Y);	
			}
			else if (n - x < y - 1) {
				return bounce(n, y - n + x, times + 1, dtn(-MX[dir], MY[dir]), X, Y);
			}
			else {
				return bounce(x + y - 1, 1, times + 1, dtn(MX[dir], -MY[dir]), X, Y);
			}
		}
		else { // -1 1
			if (x - 1 == m - y) {
				return bounce(1, m, times + 1, dtn(-MX[dir], -MY[dir]), X, Y);
			}
			else if (x - 1 < m - y) {
				return bounce(1, y + x - 1, times + 1, dtn(-MX[dir], MY[dir]), X, Y);
			}
			else {
				return bounce(x - m + y, m, times + 1, dtn(MX[dir], -MY[dir]), X, Y);
			}
		}
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int i2, j2;
		init();
		char dc[5];
		scanf("%d%d%d%d%d%d%s", &n, &m, &i1, &j1, &i2, &j2, &dc);
		for (d = 0; d < 4; d++) {
			if (DIR[d] == dc) {
				break;
			}
		}
		printf("%d\n", bounce(i1, j1, 0, d, i2, j2));
	}
	return 0;
}