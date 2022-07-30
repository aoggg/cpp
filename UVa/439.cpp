#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int steps[9][9];
queue<pair<int, int>> passed;

const int mx[] = {-2, -2, 2, 2, -1, 1, -1, 1}, my[] = {1, -1, 1, -1, 2, 2, -2, -2};

int main() {
	char c;
	int sx, sy;
	while (cin >> c >> sy) {
		sx = c - 'a' + 1;
		cout << "To get from " << c << sy << " to ";
		steps[sx][sy] = 0;
		passed.push({sx, sy});
		int tx, ty;
		cin >> c >> ty;
		cout << c << ty << " takes ";
		tx = c - 'a' + 1;
		while (passed.size() != 0) {
			int x = passed.front().first, y = passed.front().second;
			passed.pop();
			if (x == tx && y == ty) {
				cout << steps[x][y] << " knight moves.\n";
				for (int i = 1; i <= 9; i++) {
					for (int j = 1; j <= 9; j++) {
						steps[i][j] = 0;
					}
				}
				while (passed.size() != 0) {
					passed.pop();
				}
				break;
			}
			int nx, ny;
			for (int i = 0; i < 8; i++) {
				nx = x + mx[i];
				ny = y + my[i];
				if (nx == sx && ny == sy) {
					continue;
				}
				if (nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8 && steps[nx][ny] == 0) {
					passed.push({nx, ny});
					steps[nx][ny] = steps[x][y] + 1;
				}
			}
		}
	}
	return 0;
}
