//TIOJ 1994

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2050;

ll cube[MAXN][MAXN];
ll unit[MAXN][MAXN];
ll l, add;

void init() {
	// 0 3
	// 1 2
	cube[0][0] = 0;
}

void ctou() {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			unit[i][j] = cube[i][j];
		}
	}
}

void lu() {
	// 0 1
	// 3 2
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			cube[j][i] = unit[i][j];
		}
	}
	return;
}

void ld() {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			cube[l + i][j] = unit[i][j] + add;
		}
	}
	return;
}

void rd() {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			cube[l + i][l + j] = unit[i][j] + add * 2;
		}
	}
	return;
}

void ru() {
	// 2 3
	// 1 0
	for (int j = l - 1, ni = 0; j >= 0, ni < l; j--, ni++) {
		for (int i = l - 1, nj = 0; i >= 0, nj < l; i--, nj++) {
			cube[ni][l + nj] = unit[i][j] + add * 3;
		}
	}
	return;
}

int main() {
	int N;
	scanf("%d", &N);
	add = 1;
	l = 1;
	init();
	for (int i = 0; i < N; i++) {
		ctou();
		lu();
		ld();
		rd();
		ru();
		l *= 2;
		add *= 4;
	}
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			if (j != 0) printf(" ");
			printf("%lld", cube[i][j]);
		}
		puts("");
	}
	return 0;
}