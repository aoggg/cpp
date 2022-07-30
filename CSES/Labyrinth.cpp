// Problem: Labyrinth
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1193
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;

queue<pair<int, int>> passed;
vector<char> ans;
char mp[1000][1000];
pair<int, int> step[1000][1000]; //{第幾步, 怎麼走過去的}

const string dir = "LRUD"; // Left Right Up Down 
const int mx[4] = {0, 0, -1, 1}, my[4] = {-1, 1, 0, 0};

int main(){
	int n, m;
	cin >> n >> m;
	int sx, sy;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mp[i][j];
			if (mp[i][j] == 'A') {
				passed.push({i, j});
				step[i][j].first = 0;
				sx = i;
				sy = j;
			}
		}
	}
	int total = -1, x, y;
	while (passed.size() != 0) {
		x = passed.front().first, y = passed.front().second;
		if (mp[x][y] == 'B') {
			total = step[x][y].first; //此時的x, y是終點
			break;
		}
		passed.pop();
		int nx, ny;
		for (int i = 0; i < 4; i++) {
			nx = x + mx[i];
			ny = y + my[i];
			if (nx == sx && ny == sy){
				continue;
			}
			if ((nx >= 0 && nx < n) && (ny >= 0 && ny < m) && mp[nx][ny] != '#' && step[nx][ny].first == 0) {
				passed.push({nx, ny});
				step[nx][ny] = {step[x][y].first + 1, i};
			}	
		}
	}
	if (total == -1) {
		cout << "NO\n";
	}
	else {
		while (step[x][y].first != 0) {
			int moved = step[x][y].second;
			ans.push_back(dir[moved]);
			x -= mx[moved];
			y -= my[moved];
		}
		cout << "YES\n";
		cout << total << '\n';
		for (int i = total - 1; i >= 0; i--){
			cout << ans[i];
		}
		cout << '\n';
	}
	return 0;
}