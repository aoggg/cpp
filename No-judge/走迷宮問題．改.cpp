#include <iostream>
#include <queue>
#include <utility>
using namespace std;

const string DIR = "NESW";
const int mx[] = {-1, 0, 1, 0}, my[] = {0, 1, 0, -1}, md[] = {1, 3};

char mp[100][100];
bool cannot_walk[100][100][4];
int steps[100][100][4];
queue<pair<pair<int, int>, int>> passed;

int main() {
	int n, m;
	char dc;
	cin >> n >> m >> dc;
	int D;
	for (D = 0; DIR[D] != dc; D++);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mp[i][j];
			if (mp[i][j] == 'S') {
				cannot_walk[i][j][D] = true;
				steps[i][j][D] = 0;
				passed.push({{i, j}, D});
			}
		}
	}
	bool possible = false;
	while (passed.size() != 0) {
		int x = passed.front().first.first, y = passed.front().first.second, d = passed.front().second;
		passed.pop();
		if (mp[x][y] == 'E') {
			possible = true;
			cout << steps[x][y][d] << '\n';
			break;
		}
		int nx = x + mx[d], ny = y + my[d];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m && !cannot_walk[nx][ny][d] && mp[nx][ny] != '#') {
			cannot_walk[nx][ny][d] = true;
			steps[nx][ny][d] = steps[x][y][d] + 1;
			passed.push({{nx, ny}, d});
		}
		for (int i = 0; i < 2; i++) {
			int nd = (d + md[i]) % 4;
			if (!cannot_walk[x][y][nd]) {
				passed.push({{x, y}, nd});
				steps[x][y][nd] = steps[x][y][d] + 1;
				cannot_walk[x][y][nd] = true;
			}
		}
	}
	if (!possible) {
		cout << -1 << '\n';
	}
	return 0;
}