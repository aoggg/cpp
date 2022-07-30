#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int>> zebras;
queue<pair<int, int>> passed;
char mp[100][100];
int step[100][100];

const int mx[] = {1, -1, 0, 0, 1, -1, 1, -1}, my[] = {0, 0, 1, -1, 1, -1, -1, 1};
const int zmx[] = {2, 2, -2, -2, 1, -1, 1, -1}, zmy[] = {1, -1, 1, -1, 2, 2, -2, -2};

int main() {
	int T;
	cin >> T;
	for (int cases = 0; cases < T; cases++) {
		int M, N;
		cin >> M >> N;
		while (passed.size() != 0) {
			passed.pop();
		}
		zebras.clear();
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				cin >> mp[i][j];
				step[i][j] = 0;
				if (mp[i][j] == 'A') {
					passed.push({i, j});
				}
				else if (mp[i][j] == 'Z') {
					zebras.push_back({i, j});
				}
			}
		}
		int moved = -1;
		while (passed.size() != 0) {
			int x = passed.front().first, y = passed.front().second;
			passed.pop();
			if (mp[x][y] == 'B') {
				moved = step[x][y];
				break;
			}
			int nx, ny;
			for (int i = 0; i < 8; i++) {
				nx = x + mx[i];
				ny = y + my[i];
				bool possible = true;
				if (nx >= 0 && nx < M  && ny >= 0 && ny < N && step[nx][ny] == 0 && mp[nx][ny] != 'Z' && mp[nx][ny] != 'A') {
					for (int j = 0; j < zebras.size() && possible; j++) {
						for (int k = 0; k < 8; k++) {
							if (nx == zebras[j].first + zmx[k] && ny == zebras[j].second + zmy[k] && mp[nx][ny] != 'B') {
								possible = false;
								break;
							}
						}
					}
					if (possible) {
						passed.push({nx, ny});
						step[nx][ny] = step[x][y] + 1;
					}
				}
			}
		}
		if (moved == -1) {
			cout << "King Peter, you can't go now!\n";
		}
		else {
			cout << "Minimal possible length of a trip is " << moved << '\n';
		}
	}
	return 0;
}