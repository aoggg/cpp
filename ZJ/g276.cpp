// ZJ g276
// 2024-07-28

#include <iostream>
using namespace std;

const int MAXN = 105;
const int MAXK = 505;

int mx[MAXN];

struct info {
	int x, y;
	int mx, my;
	bool alive = true;
};

bool bomb[MAXN][MAXN];
bool mp[MAXN][MAXN][MAXK]; //[x][y][i]
info boss[MAXK];
int n, m, k, live;

void byebye(int x, int y) {
	bool dead = false;
	for (int i = 0; i < k; i++) {
		if (mp[x][y][i]) {
			dead = true;
			boss[i].alive = false;
			live--;
			mp[x][y][i] = false;
		}
	}
	if (dead) {
		bomb[x][y] = false;
	}
}

void clean(int x, int y) {
	for (int i = 0; i < k; i++) {
		mp[x][y][i] = false;
	}
}

int main() {
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) {
		cin >> boss[i].x >> boss[i].y >> boss[i].mx >> boss[i].my;
	}
	live = k;
	while (live) {
		for (int i = 0; i < k; i++) {
			int x = boss[i].x, y = boss[i].y;
			if (boss[i].alive) {
				// leave bomb
				bomb[x][y] = true;
				// move
				x += boss[i].mx;
				y += boss[i].my;
				if (x >= n || y >= m || x < 0 || y < 0) {
					boss[i].alive = false;
					live--;
				}
				else {
					boss[i].x = x;
					boss[i].y = y;
					mp[x][y][i] = true;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (bomb[i][j]) {
					byebye(i, j);
				}
				else {
					clean(i, j);
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (bomb[i][j]) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}