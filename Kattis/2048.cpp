// Kattis 2048

#include <iostream>
using namespace std;

const int MAXN = 10;
const int MX[] = {0, -1, 0, 1}, MY[] = {-1, 0, 1, 0};

int puzzle[MAXN][MAXN];
int ans[MAXN][MAXN];
bool merge[MAXN][MAXN];
int m;

void play(int x, int y) {
	if (puzzle[x][y] == 0) {
		return;
	}
	int num = puzzle[x][y];
	int nx = x, ny = y;
	bool FT = true;
	while (FT || ans[nx][ny] == 0) {
		FT = false;
		nx += MX[m], ny += MY[m];
		if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4) {
			nx -= MX[m];
			ny -= MY[m];
			break;
		}
	}
	ans[x][y] = 0;
	if (ans[nx][ny] == num && !merge[nx][ny]) {
		ans[nx][ny] *= 2;
		merge[nx][ny] = true;
	}
	else if (ans[nx][ny] == 0) {
		ans[nx][ny] = num;
	}
	else {
		nx -= MX[m];
		ny -= MY[m];
		ans[nx][ny] = num;
	}
	return;
}

void output(void) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j != 0) {
				cout << ' ';
			}
			cout << ans[i][j];
		}
		cout << '\n';
	}
	return;
}

int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> puzzle[i][j];
			merge[i][j] = false;
		}
	}
	cin >> m;
	if (m == 0 || m == 1) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				play(i, j);
			}
		}
	}
	else {
		for (int i = 3; i >= 0; i--) {
			for (int j = 3; j >= 0; j--) {
				play(i, j);
			}
		}
	}
	output();
	return 0;
}