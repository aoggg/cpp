#include <iostream>
using namespace std;

struct info {
	int x, y, steps, colour, dir;
};

char board[30][30];
info passed[12510];
bool visited[30][30][10][10];
int M, N;

const int MX[] = {-1, 0, 1, 0}, MY[] = {0, 1, 0, -1};
const int MD[] = {0, 1, 3}, MC[] = {1 ,0, 0};

bool check(int x, int y, int c, int d) {
	return (x >= 0 && x < M && y >= 0 && y < N && board[x][y] != '#' && !visited[x][y][c][d]);
}

int main() {
	bool FT = true;
	for (int cases = 1; cin >> M >> N; cases++) {
		if (M == 0 && N == 0) {
			break;
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				cin >> board[i][j];
				for (int k = 0; k < 5; k++) {
					for (int a = 0; a < 4; a++) {
						visited[i][j][k][a] = false;
					}
				}
				if (board[i][j] == 'S') {
					passed[0] = {i, j, 0, 0, 0};
				}
			}
		}
		int now, next, ans = -1;
		for (now = 0, next = 1; now < next; now++) {
			int x = passed[now].x, y = passed[now].y;
			int steps = passed[now].steps;
			int colour = passed[now].colour;
			int dir = passed[now].dir;
			if (board[x][y] == 'T' && colour == 0) {
				ans = steps;
				break;
			}
			for (int i = 0; i < 3; i++) {
				int nx = x + MX[dir] * MC[i], ny = y + MY[dir] * MC[i];
				int nd = (dir + MD[i]) % 4;
				int nc = (colour + MC[i]) % 5;
				if (check(nx, ny, nc, nd)) {
					passed[next] = {nx, ny, steps + 1, nc, nd};
					next++;
					visited[nx][ny][nc][nd] = true;
				}
			}
		}
		if (!FT) {
			cout << '\n';
		}
		FT = false;
		cout << "Case #" << cases << '\n';
		if (ans == -1) {
			cout << "destination not reachable\n";
		}
		else {
			cout << "minimum time = " << ans << " sec\n";
		}
	} 
	return 0;
}