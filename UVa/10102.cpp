#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int steps[100][100];
char mp[100][100];
queue<pair<int, int>> passed;
vector<pair<int, int>> start;

const int mx[] = {0, 0, 1, -1}, my[] = {1, -1, 0, 0};

int main() {
	int M;
	while (cin >> M) {
		int longest = 0;
		start.clear();
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < M; j++) {
				cin >> mp[i][j];
				if (mp[i][j] == '1') {
					start.push_back({i, j});
				}
			}
		}
		for (int cases = 0; cases < start.size(); cases++) {
			for (int i = 0; i < M; i++) {
				for (int j = 0; j < M; j++) {
					steps[i][j] = 0;
				}
			}
			while (passed.size() != 0) {
				passed.pop();
			}
			int sx = start[cases].first, sy = start[cases].second;
			// cout << sx << ' ' << sy << "\n\n";
			passed.push({sx, sy});
			while (passed.size() != 0) {
				int x = passed.front().first, y = passed.front().second;
				passed.pop();
				if (mp[x][y] == '3') {
					longest = max(steps[x][y], longest); 
					// for (int i = 0; i < M; i++) {
						// for (int j = 0; j < M; j++) {
							// cout << steps[i][j];
						// }
						// cout << '\n';
					// }
					// cout << '\n';
					break;
				}
				for (int i = 0; i < 4; i++) {
					int nx = x + mx[i], ny = y + my[i];
					if (nx == sx && ny == sy) {
						continue;
					}
					if (nx >= 0 && nx < M && ny >= 0 && ny < M && steps[nx][ny] == 0) {
						passed.push({nx, ny});
						steps[nx][ny] = steps[x][y] + 1;
					}
				}
			}
		}
		cout << longest << '\n';
	}
	return 0;
}