#include <iostream>
using namespace std;

const int MAXN = 4e3;
const int MX[] = {1, -1, 0, 0}, MY[] = {0, 0, 1, -1};
const int DRUG = 0, P = 1, X = 2, O = 3;

struct Info {
	int last;
	int x;
	int y;
};

int N;
string mp[MAXN];
int status[MAXN][MAXN];
Info route[MAXN * MAXN];
bool passed[MAXN][MAXN];
bool checked[MAXN][MAXN];

void init(int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			status[i][j] = DRUG;
		}
	}
}

void up_date(int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (mp[i][j] == 'X') {
				status[i][j] = X;
			}
			else if (mp[i][j] == 'P') {
				status[i][j] = P;
			}
		}
	}
}

void walk(int now) {
	while (now != -1) {
		int x = route[now].x, y = route[now].y;
		if (status[x][y] == DRUG) {
			status[x][y] = O;
		}
		now = route[now].last;
	}
	return;
}

bool check(int x, int y) {
	if (x < 0 || x >= N || y < 0 || y >= N) {
		return false;
	}
	if (passed[x][y]) {
		return false;
	}
	return true;
}

void go(int x, int y) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			passed[i][j] = false;
		}
	}
	route[0] = {-1, x, y};
	passed[x][y] = true;
	for (int now = 0, next = 1; now < next; now++) {
		int x = route[now].x, y = route[now].y;
		int last = now;
		if ((status[x][y] == P && checked[x][y]) || status[x][y] == O || status[x][y] == X) {
			walk(now);
			return;
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + MX[i];
			int ny = y + MY[i];
			if (check(nx, ny)) {
				passed[nx][ny] = true;
				route[next].x = nx;
				route[next].y = ny;
				route[next].last = last;
				next++;
			}
		}
	}
	return;
}

void output(int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (status[i][j] == O) {
				cout << 'O';
			}
			else if (status[i][j] == DRUG) {
				cout << '.';
			}
			else if (status[i][j] == X) {
				cout << 'X';	
			}
			else {
				cout << 'P';
			}
		}
		cout << '\n';
	}	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	init(N);
	for (int i = 0; i < N; i++) {
		cin >> mp[i];
	}
	up_date(N);
	for (int i = 0; i < N; i++) {
		if (mp[i][0] == '.') {
			status[i][0] = O;
		}
		if (mp[0][i] == '.') {
			status[0][i] = O;
		}
		if (mp[N - 1][i] == '.') {
			status[N - 1][i] = O;
		}
		if (mp[i][N - 1] == '.') {
			status[i][N - 1] = O;
		}
	}
	//go
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (status[i][j] == P) {
				go(i, j);
				checked[i][j] = true;
			}
		}
	}
	//output
	output(N);
	return 0;
}