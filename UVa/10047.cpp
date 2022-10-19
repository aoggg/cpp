#include <iostream>
using namespace std;

struct info {
	int x, y, steps, colour, dir;
};

char board[30][30];
info passed[12510];
bool visited[30][30][10][10];

const int MX[] = {-1, 0, 1, 0}, MY[] = {0, 1, 0, -1};

int main() {
	int M, N;
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
			int nx = x + MX[dir], ny = y + MY[dir];
			if (nx >= 0 && nx < M && ny >= 0 && ny < N
			    && board[nx][ny] != '#' && !visited[nx][ny][(colour + 1) % 5][dir]) 
			{
				passed[next] = {nx, ny, steps + 1, (colour + 1) % 5, dir};
				next++;
				visited[nx][ny][(colour + 1) % 5][dir] = true;
			}
			if (!visited[x][y][colour][(dir + 1) % 4]) {
				passed[next] = {x, y, steps + 1, colour, (dir + 1) % 4};
				next++;
				visited[x][y][colour][(dir + 1) % 4] = true;
			}
			if (!visited[x][y][colour][(dir + 3) % 4]) {
				passed[next] = {x, y, steps + 1, colour, (dir + 3) % 4};
				next++;
				visited[x][y][colour][(dir + 3) % 4] = true;	
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