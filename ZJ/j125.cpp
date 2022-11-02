#include <iostream>
using namespace std;

const int MAXN = 305;
const int MX[] = {0, -1, 1, 0}, MY[] = {-1, 0, 0, 1};

struct info{
	int x, y, step;
};

int height[MAXN][MAXN];
info route[MAXN * MAXN];
bool passed[MAXN][MAXN];
int ans = 0, n;

void init() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			passed[i][j] = false;
		}
	}
}

bool check(int nx, int ny, int x, int y, int d) {
	if (nx >= n || nx < 0 || ny < 0 || ny >= n) {
		return false;
	}
	if (passed[nx][ny] || abs(height[nx][ny] - height[x][y]) > d) {
		return false;
	}
	return true;
} 

bool possible(int d) {
	route[0] = {0, 0};
	for (int now = 0, next = 1; now < next; now++) {
		int x = route[now].x, y = route[now].y;
		int step = route[now].step;
		if (x == n - 1 && y == n - 1) {
			ans = step;
			return true;
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + MX[i], ny = y + MY[i];
			if (check(nx, ny, x, y, d)) {
				route[next] = {nx, ny, step + 1};
				passed[nx][ny] = true;
				next++;
			}
		}
	}
	return false;
}

int main() {
	cin >> n;
	int most = 0, least = 1e9;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> height[i][j];
			if (i != 0) {
				most = max(most, abs(height[i - 1][j] - height[i][j]));
				least = min(least, abs(height[i - 1][j] - height[i][j]));
			}
			if (j != 0) {
				most = max(most, abs(height[i][j - 1] - height[i][j]));
				least = min(least, abs(height[i][j - 1] - height[i][j]));
			}
		}
	}
	int times = 1000;
	int r = most, l = least;
	int ansd = 0;
	while (times-- && l <= r) {
		init();
		int m = (l + r) / 2;
		if (possible(m)) {
			ansd = m;
			r = m - 1; 
		}
		else {
			l = m + 1;
		}
	}
	cout << ansd << '\n';
	cout << ans << '\n';
	return 0;
}