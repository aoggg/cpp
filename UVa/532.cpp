#include <iostream>
#include <queue>

using namespace std;

struct point {
	int x, y, z;
	point (int x, int y, int z): x(x), y(y), z(z) {};
};

const int mx[] = {1, -1, 0, 0, 0, 0}, my[] = {0, 0, 1, -1, 0, 0}, mz[] = {0, 0, 0, 0, 1, -1};

int main() {
	int L, C, R;
	while (cin >> L >> C >> R) {
		char mp[31][31][31];
		int steps[31][31][31] = {};
		queue<point> passed;
		if (L == 0 && C == 0 && R == 0) {
			break;
		}
		for (int i = 0; i < L; i++) {
			for (int j = 0; j < C; j++) {
				for (int k = 0; k < R; k++) {
					cin >> mp[i][j][k];
					if (mp[i][j][k] == 'S') {
						passed.push({i, j, k});
						steps[i][j][k] = 0;
					}
				}
			}
		}
		int ans = -1;
		while (passed.size() != 0) {
			int x = passed.front().x, y = passed.front().y, z = passed.front().z;
			passed.pop();
			if (mp[x][y][z] == 'E') {
				ans = steps[x][y][z];
				break;
			}
			for (int i = 0; i < 6; i++) {
				int nx = x + mx[i], ny = y + my[i], nz = z + mz[i];
				if (nx >= 0 && nx < L && ny >= 0 && ny < C && nz >= 0 && nz < R && steps[nx][ny][nz] == 0 && mp[nx][ny][nz] != '#' && mp[nx][ny][nz] != 'S') {
					passed.push({nx, ny, nz});
					steps[nx][ny][nz] = steps[x][y][z] + 1;
				}
			}
		}
		if (ans != -1) {
			cout << "Escaped in " << ans << " minute(s).\n";
		}
		else {
			cout << "Trapped!\n";
		}
	}
	return 0;
}