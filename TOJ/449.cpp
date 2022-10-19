#include <iostream>
using namespace std;

struct info {
	int x, y, key, steps;
};

bool visited[100][100][20];
char mp[100][100];
info passed[200000];
int r, c, nx, ny, nk, ns;

const string KEY = "rgby", DOOR = "RGBY";
const int MX[] = {0, 1, -1, 0}, MY[] = {1, 0, 0, -1};

bool check(int x, int y, int k) {
	if (x < 0 || x >= r || y < 0 || y >= c || mp[x][y] == '#' || visited[x][y][k]) {
		return false;
	}
	int door = 0;
	//door
	for (int i = 0; i < 4; i++) {
		if (DOOR[i] == mp[x][y]) {
			door = (1 << i);
		}
	}
	if (door != 0) {
		return (k & door);
	}
	//key
	for (int i = 0; i < 4; i++) {
		if (KEY[i] == mp[x][y]) {
			nk |= (1 << i);
			break;
		}
	}
	return true;
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> mp[i][j];
			if (mp[i][j] == '*') {
				passed[0] = {i, j, 0, 0};
				visited[i][j][0] = true;
			}
		}
	}
	int now, next;
	int ans = -1;
	for (now = 0, next = 1; now < next; now++) {
		int x = passed[now].x, y = passed[now].y;
		int key = passed[now].key;
		int steps = passed[now].steps;
		if (mp[x][y] == 'X') {
			ans = steps;
			break;
		}
		for (int i = 0; i < 4; i++) {
			nx = MX[i] + x, ny = MY[i] + y;
			ns = steps + 1;
			nk = key;
			if (check(nx, ny, nk)) {
				passed[next] = {nx, ny, nk, ns};
				next++;
				visited[nx][ny][nk] = true;
			}
		}
	}
	if (ans != -1) {
		cout << "Escape possible in " << ans << " steps.\n";
	}
	else {
		cout << "The poor student is trapped!\n";
	}
	return 0;
}