// Problem: 044 - Shift and Swapping（★3）
// Contest: AtCoder - 競プロ典型 90 問
// URL: https://atcoder.jp/contests/typical90/tasks/typical90_ar
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;

int A[MAXN];

void print(int N, int moved) {
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", A[i], (i + moved) % N);
	}
	return;
}

int main() {
	int N, Q;
	scanf("%d%d", &N, &Q);
	for (int i = 0; i < N; i++) {
		scanf("%d", A + i);
	}
	int moved = 0;
	while(Q--) {
		int T, x, y;
		scanf("%d%d%d", &T, &x, &y);
		x = (x - 1 + N) % N;
		y = (y - 1 + N) % N;
		if (T == 1) {
			x = (x - moved + N) % N;
			y = (y - moved + N) % N;
			swap(A[x], A[y]);
		}
		else if (T == 2) {
			moved = (moved + 1) % N;
		}
		else {
			x = (x - moved + N) % N;
			printf("%d\n", A[x]);
		}
	}
	return 0;
}