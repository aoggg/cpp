#include<iostream>
#include<queue>
#include<utility>
using namespace std;

queue<pair<int, int>> passed;
bool cannot_walked[1001][1001];

const int mx[] = {-1, 0, 1, 0}, my[] = {0, -1, 0, 1};

int main() {
	int N, M;
	cin >> N >> M;
	int px, py;
	cin >> px >> py;
	passed.push({px, py});
	cannot_walked[px][py] = true;
	int u, v;
	cin >> u >> v;
	int F;
	cin >> F;
	for (int i = 0; i < F; i++) {
		int fx, fy;
		cin >> fx >> fy;
		cannot_walked[fx][fy] = true;
	}
	bool possible = false;
	while (passed.size() != 0) {
		int x = passed.front().first, y = passed.front().second;
		passed.pop();
		if (x == u && y == v) {
			possible = true;
			break;
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + mx[i], ny = y + my[i];
			if (nx > 0 && nx <= N && ny > 0 && ny <= M && !cannot_walked[nx][ny]) {
				passed.push({nx, ny});
				cannot_walked[nx][ny] = true;
			}
		}
	}
	if (possible) {
		cout << "Cool!\n";
	}
	else {
		cout << "Harakiri!\n";
	}
	return 0;
}