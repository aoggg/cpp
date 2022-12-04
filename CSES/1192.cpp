// Problem: Counting Rooms
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1192
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <utility>
using namespace std;

char mp[1000][1000];
bool check[1000][1000];
int n, m;
pair<int, int> visited[1000000];

const int MX[] = {0, 1, -1, 0}, MY[] = {1, 0, 0, -1};

bool checking(int x, int y) {
	return (x >= 0 && x < n && y >= 0 && y < m && !check[x][y] && mp[x][y] == '.');
}

void walking() {
	int now, next;
	for (now = 0, next = 1; now < next; now++) {
		int x = visited[now].first;
		int y = visited[now].second;
		for (int i = 0; i < 4; i++) {
			int nx = x + MX[i];
			int ny = y + MY[i];
			if (checking(nx, ny)) {
				visited[next] = {nx, ny};
				check[nx][ny] = true;
				next++;
			}
		}
	}
	return;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mp[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mp[i][j] == '.' && !check[i][j]) {
				visited[0] = {i, j};
				walking();
				ans++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}