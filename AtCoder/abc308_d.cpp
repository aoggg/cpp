// Problem: D - Snuke Maze
// Contest: AtCoder - AtCoder Beginner Contest 308
// URL: https://atcoder.jp/contests/abc308/tasks/abc308_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 505;
const string SNUKE = "snuke";
const int MX[] = {1, -1, 0, 0}, MY[] = {0, 0, 1, -1};

struct info {
	int x, y;
	int steps;
};

info passed[MAXN * MAXN];
char maze[MAXN][MAXN];
bool visited[MAXN][MAXN];
int H, W;

bool check(int x, int y, int s) {
	if (x < 0 || x > H || y < 0 || y > W) return false;
	if (visited[x][y]) return false;
	if (maze[x][y] != SNUKE[(s - 1) % 5]) return false;
	return true;
}

bool bfs() {
	passed[0].x = passed[0].y = 0;
	passed[0].steps = 1;
	if (maze[0][0] != 's') return false;
	for (int now = 0, next = 1; now < next; now++) {
		int x = passed[now].x, y = passed[now].y;
		int steps = passed[now].steps;
		if (x == H && y == W) return true;
		for (int i = 0; i < 4; i++) {
			int nx = x + MX[i], ny = y + MY[i];
			int ns = steps + 1;
			if (check(nx, ny, ns)) {
				passed[next].x = nx;
				passed[next].y = ny;
				passed[next].steps = ns;
				next++;
				visited[nx][ny] = true;
			}
		}
	}
	return false;
}

int main() {
	cin >> H >> W;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> maze[i][j];
		}
	}
	H--, W--;
	if (bfs()) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}