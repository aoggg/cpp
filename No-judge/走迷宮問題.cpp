#include<iostream>
#include<queue>
#include<utility>
using namespace std;

queue<pair<int, int>> passed;
char mp[1000][1000], steps[1000][1000];

const int mx[] = {1, 0, -1, 0}, my[] = {0, -1, 0, 1};

int main(){
	int n, m;
	cin >> n >> m;
	int total = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mp[i][j];
			if (mp[i][j] == 'S'){
				passed.push({i, j});
				steps[i][j] = 0;
			}
		}
	}
	while (passed.size() != 0) {
		int x = passed.front().first, y = passed.front().second;
		passed.pop();
		if (mp[x][y] == 'E'){
			total = steps[x][y];
			break;
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + mx[i], ny = y + my[i];
			if ((nx >= 0 && nx <= n && ny >= 0 && ny <= m) && (mp[nx][ny] == '.' || mp[nx][ny] == 'E') && steps[nx][ny] == 0) {
				steps[nx][ny] = steps[x][y] + 1;
				passed.push({nx, ny});
			}
		}
	}
	cout << total << '\n';
	return 0;
}