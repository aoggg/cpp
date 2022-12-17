// TOJ 657

#include <iostream>
using namespace std;

const int MAXN = 10;

char mp[MAXN][MAXN];
int ways = 0;
bool queen[MAXN][MAXN], column[MAXN];

bool check(int x, int y) {
	if (column[y]) {
		return false;
	}
	if (mp[x][y] == '*') {
		return false;
	}
	for (int i = 1; i <= min(x, y); i++) {
		if (queen[x - i][y - i] == true) {
			return false;
		}
	}
	for (int i = 1; i <= min(x, 8 - y); i++) {
		if (queen[x - i][y + i] == true) {
			return false;
		}
	}
	return true;
}

void play(int depth) {
	if (depth == 8) {
		ways++;
		return;
	}
	for (int i = 0; i < 8; i++) {
		if (check(depth, i)) {
			queen[depth][i] = true;
			column[i] = true;
			play(depth + 1);
			queen[depth][i] = false;
			column[i] = false;
		}
	}
	return;
} 

int main() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%c", &mp[i][j]);
		}
	}
	play(0);
	printf("%d\n", ways);
	return 0;
}