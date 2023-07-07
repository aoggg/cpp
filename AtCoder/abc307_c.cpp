// Problem: C - Ideal Sheet
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 307)
// URL: https://atcoder.jp/contests/abc307/tasks/abc307_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 15;

char A[MAXN][MAXN], B[MAXN][MAXN], X[MAXN][MAXN], C[5 * MAXN][5 * MAXN];
int HA, WA, HB, WB, HX, WX, ablack = 0, totalblack = 0, xblack = 0;

void init() {
	for (int i = 0; i < 5 * MAXN; i++) {
		for (int j = 0; j < 5 * MAXN; j++) {
			C[i][j] = '.';
		}
	}
}

// void outputC() {
	// for (int i = 0; i < 3 * MAXN; i++) {
		// for (int j = 0; j < 3 * MAXN; j++) {
			// cerr << C[i][j];
		// }
		// cerr << '\n';
	// }
// }

void pasteB(int x, int y) {
	for (int i = x; i - x < HB; i++) {
		for (int j = y; j - y < WB; j++) {
			if (C[i][j] == '.') {
				C[i][j] = B[i - x][j - y];
				if (C[i][j] == '#') totalblack++;
			}
		}
	}
}

void removeB() {
	init();
	totalblack = ablack;
	for (int i = 0; i < HA; i++) {
		for (int j = 0; j < WA; j++) {
			C[2 * MAXN + i][2 * MAXN + j] = A[i][j];
		}
	}
}

bool checkX(int x, int y) {
	for (int i = x; i - x < HX; i++) {
		for (int j = y; j - y < WX; j++) {
			if (C[i][j] != X[i - x][j - y]) return false;
		}
	}
	return true;
}

bool findX() {
	if (xblack != totalblack) return false;
	for (int i = 0; i + HX <= 5 * MAXN; i++) {
		for (int j = 0; j + WX <= 5 * MAXN; j++)	{
			if (checkX(i, j)) return true;
		}
	}
	return false;
}

int main() {
	init();
	cin >> HA >> WA;
	for (int i = 0; i < HA; i++) {
		for (int j = 0; j < WA; j++) {
			cin >> A[i][j];
			if (A[i][j] == '#') ablack++;
		}
	}
	cin >> HB >> WB;
	for (int i = 0; i < HB; i++) {
		for (int j = 0; j < WB; j++) cin >> B[i][j];
	}
	cin >> HX >> WX;
	for (int i = 0; i < HX; i++) {
		for (int j = 0; j < WX; j++) {
			cin >> X[i][j];
			if (X[i][j] == '#') xblack++;
		}
	}
	bool yes = false;
	removeB();
	for (int i = 0; i + HB <= 5 * MAXN; i++) {
		for (int j = 0; j + WB <= 5 * MAXN; j++) {
			pasteB(i, j);
			// outputC();
			// cerr << '\n';
			if (findX()) {
				yes = true;
				break;
			} 
			removeB();
		}
	}
	cerr << xblack << '\n';
	if (yes) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}