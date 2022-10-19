#include <iostream>
using namespace std;

struct info {
	int x, y, steps, route;
};

const int KNIGHT = 1, BISHOP = 2, TELEPORT = 3; 
const int MX[] = {-2, -2, 1, -1, 2, 2, 1, -1, //K
				   2, 2, -2, -2}; //B
const int MY[] = {1, -1, 2, 2, 1, -1, -2, -2, //K
				  -2, 2, 2, -2}; //B
const int ROUTE[] = {KNIGHT, KNIGHT, KNIGHT, KNIGHT, KNIGHT, KNIGHT, KNIGHT, KNIGHT,
					 BISHOP, BISHOP, BISHOP, BISHOP};

info passed[5000];
bool visited[45][45][4];
bool obstacle[45][45];

int main() {
	int N;
	while (cin >> N) {
		if (N == 0) {
			break;
		}
		
		for (int i = 0; i < 2 * N; i++) {
			for (int j = 0; j < 2 * N; j++) {
				obstacle[i][j] = false;
				for (int k = 0; k < 4; k++) {
					visited[i][j][k] = false;
				}
			}
		}
		
		int x, y;
		cin >> x >> y;
		passed[0].x = x - 1;
		passed[0].y = y - 1;
		passed[0].steps = 0;
		passed[0].route = 0;
		
		int endx, endy;
		cin >> endx >> endy;
		endx--, endy--;
		
		while (cin >> x >> y) {
			if(x == 0 && y == 0) {
				break;
			}
			x--;
			y--;
			obstacle[x][y] = true;
		}
		int now, next;
		int ans = -1;
		for (now = 0, next = 1; now < next; now++) {
			x = passed[now].x;
			y = passed[now].y;
			int steps = passed[now].steps;
			int route = passed[now].route;
			if (x == endx && y == endy) {
				ans = steps;
				break;
			}
			int nx, ny;
			for (int i = 0; i < 12; i++) {
				if (route != ROUTE[i]) {
					nx = x + MX[i];
					ny = y + MY[i];
					if (nx >= 0 && nx < N * 2 && ny >= 0 && ny < N * 2 
					    && !visited[nx][ny][ROUTE[i]] && !obstacle[nx][ny])
					{
						passed[next] = {nx, ny, steps + 1, ROUTE[i]};
						visited[nx][ny][ROUTE[i]] = true;
						next++;
					}
				}
			}
			if (route != TELEPORT) {
				nx = 2 * N - 1 - x, ny = y;
				if (nx >= 0 && nx < N * 2 && ny >= 0 && ny < N * 2 
					&& !visited[nx][ny][TELEPORT] && !obstacle[nx][ny])
				{
					passed[next] = {nx, ny, steps + 1, TELEPORT};
					visited[nx][ny][TELEPORT] = true;
					next++;
				}
				nx = x, ny = 2 * N - 1 - y;
				if (nx >= 0 && nx < N * 2 && ny >= 0 && ny < N * 2 
					&& !visited[nx][ny][TELEPORT] && !obstacle[nx][ny])
				{
					passed[next] = {nx, ny, steps + 1, TELEPORT};
					visited[nx][ny][TELEPORT] = true;
					next++;
				}
			}
		}
		if (ans == -1) {
			cout << "Solution doesn't exist\n";
		}
		else {
			cout << "Result : " << ans << '\n';
		}
	}
	return 0;
}