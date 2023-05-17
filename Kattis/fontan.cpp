// Problem: Fountain
// Contest: Kattis
// URL: https://open.kattis.com/problems/fontan
// Memory Limit: 1024 MB
// Time Limit: 1000 ms

#include <iostream>
#include <utility>
using namespace std;

const int MAXN = 55;

int N, M;
char grid[MAXN][MAXN];
pair<int, int> passed[MAXN * MAXN];

void spreading(int next) {
	for (int now = 0; now < next; now++) {
		int x = passed[now].first, y = passed[now].second;
		if (x + 1 == N) continue;
		else if (grid[x + 1][y] == '.') {
			passed[next] = {x + 1, y};
			grid[x + 1][y] = 'V';
			next++;
		}
		else if (grid[x + 1][y] == '#') {
			if (y + 1 < M && grid[x][y + 1] == '.') {
				passed[next] = {x, y + 1};
				grid[x][y + 1] = 'V';
				next++;
			}
			if (y - 1 >= 0 && grid[x][y - 1] == '.') {
				passed[next] = {x, y - 1};
				grid[x][y - 1] = 'V';
				next++;
			}
		}
	}
	return;
}

int main() {
	scanf("%d%d", &N, &M);
	int n = 0;
	char c;
	scanf("%c", &c);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= M; j++) {
			scanf("%c", &(grid[i][j]));
			if (grid[i][j] == 'V') {
				passed[n] = {i, j};
				n++;
			}
		}
	}
	cerr << '\n';
	spreading(n);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%c", grid[i][j]);
		}
		puts("");
	}
	return 0;
}