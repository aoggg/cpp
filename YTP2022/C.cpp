#include <iostream>
#include <utility>
using namespace std;

char mp[1005][1005];
bool visited[1005][1005];
int N, M;
pair<int, int> passed[1000005];

const int MX[] = {0, 1, 0, -1}, MY[] = {1, 0, -1, 0};

bool check(int x, int y) {
	return (x >= 0 && x < N && y >= 0 && y < M && mp[x][y] != '#' && !visited[x][y]);
}

bool walking(void) {
	int now, next;
	int Anum = 0, Bnum = 0;
	for (now = 0, next = 1; now < next; now++) {
		int x = passed[now].first;
		int y = passed[now].second;
		for (int i = 0; i < 4; i++) {
			int nx = x + MX[i];
			int ny = y + MY[i];
			if (check(nx, ny)) {
				passed[next] = {nx, ny};
				visited[nx][ny] = true;
				next++;
				if (mp[nx][ny] == 'A') {
					Anum++;
				}
				if (mp[nx][ny] == 'B') {
					Bnum++;
				}
			}
		}
	}
	return Anum == Bnum;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> mp[i][j];
				visited[i][j] = false;
			}
		}
		bool possible = true;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (mp[i][j] != '#' && !visited[i][j]) {
					passed[0] = {i, j};
					possible = walking();
					if (!possible) {
						break;
					}
				}
			}
		}
		if (!possible) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	return 0;
}