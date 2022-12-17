// Problem: B. 2048（2048）
// Contest: Codeforces - NHDK Ten Point Round #32 （Div. 2, based on NHDK APCS 模擬賽 #1）
// URL: https://codeforces.com/gym/415712/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 15;
const int MX[] = {-1, 1, 0, 0}, MY[] = {0, 0, -1, 1};

int puzzle[MAXN][MAXN], np[MAXN][MAXN];
bool merge[MAXN][MAXN], change;
ll counter = 0;
int N, M;
int m; // m - movement

void play(int x, int y) {
	if (puzzle[x][y] == 0) {
		return;
	}
	int num = puzzle[x][y];
	int nx = x, ny = y;
	bool FT = true;
	while (FT || np[nx][ny] == 0) {
		FT = false;
		nx += MX[m], ny += MY[m];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
			nx -= MX[m], ny -= MY[m];
			break;
		}
	}
	np[x][y] = 0;
	if (np[nx][ny] == num && !merge[nx][ny]) {
		counter++;
		np[nx][ny] *= 2;
		if (np[nx][ny] >= 2048) {
			np[nx][ny] = 2;
		}
		merge[nx][ny] = true;
	}
	else if (np[nx][ny] == 0) {
		np[nx][ny] = num;
	}
	else {
		nx -= MX[m];
		ny -= MY[m];
		np[nx][ny] = num;
	}
	return;
}

void newblock(ll sum, int x) {
	
	if (!change || x == 0) {
		return;
	}
	int num = 2;
	if (sum % 32 == 0) {
		num = 4;
	}
	int place = 0;
	int nplace = sum % x + 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (puzzle[i][j] == 0) {
				place++;
				if (nplace == place) {
					puzzle[i][j] = num;
					return;
				}
			}
		}
	}
	return;
}

void update() {
	int sum = 0;
	int x = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (puzzle[i][j] != np[i][j]) {
				change = true;
			}
			puzzle[i][j] = np[i][j];
			if (puzzle[i][j] == 2048) {
				puzzle[i][j] = 2;
			}
			sum += puzzle[i][j];
			if (puzzle[i][j] == 0) {
				x++;
			}
			np[i][j] = 0;
			merge[i][j] = false;
		}
	}
	newblock(sum, x);
	return;
}

void output() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", puzzle[i][j]);
		}
		puts("");
	}
	puts("");
	return;
}

int main() {
	int q;
	scanf("%d%d%d", &N, &M, &q);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &puzzle[i][j]);
		}
	}
	while (q--) {
		change = false;
		scanf("%d", &m); // up down left right
		m--;
		if (m == 0 || m == 2) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					play(i, j);
				}
			}
		}
		else {
			for (int i = N - 1; i >= 0; i--) {
				for (int j = M - 1; j >= 0; j--) {
					play(i, j);
				}
			}
		}
		update();
		// output();
	}
	printf("%lld\n", counter);
	return 0;
}