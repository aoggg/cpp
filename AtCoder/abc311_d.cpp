// Problem: D - Grid Ice Floor
// Contest: AtCoder - Toyota Programming Contest 2023#4（AtCoder Beginner Contest 311）
// URL: https://atcoder.jp/contests/abc311/tasks/abc311_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 205;
const int MX[] = {1, -1, 0, 0}, MY[] = {0, 0, 1, -1};

string mp[MAXN];
bool visited[MAXN][MAXN][4];
int N, M;
int ans = 0;

bool check(int x, int y) {
	return (x < N && y < M && mp[x][y] == '.');
}

bool checkv(int x, int y) {
	for (int i = 0; i < 4; i++) {
		if (visited[x][y][i]) return false;
	}
	return true;
}

void moved(int, int);

void go(int x, int y, int dir) {
	int nx = x + MX[dir], ny = y + MY[dir];
	while (check(nx, ny)) {
		if (visited[nx][ny][dir]) return;
		if (checkv(nx, ny)) ans++;
		visited[nx][ny][dir] = true;
		x = nx, y = ny;
		nx = x + MX[dir], ny = y + MY[dir];
	}
	moved(x, y);
} 

void moved(int x, int y) {
	for (int i = 0; i < 4; i++) {
		if (!visited[x][y][i]) {
			if (checkv(x, y)) ans++;
			visited[x][y][i] = true;
			go(x, y, i);
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) cin >> mp[i];
	moved(1, 1);
	cout << ans << '\n';
	return 0;
}