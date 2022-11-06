// Problem: 108 - Maximum Sum
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=44
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 105;

int rec[MAXN][MAXN];
int sum[MAXN][MAXN]; 
int col[MAXN]; 
int N;

void init(int N) {
	for (int i = 0; i <= N; i++) {
		col[i] = 0;
		for (int j = 0; j <= N; j++) {
			sum[i][j] = 0;
		}
	}
	return;
}

void count(int top, int bottom) {
	for (int i = 1; i <= N; i++) {
		col[i] = sum[bottom][i] - sum[top - 1][i];
	}
	return;
}

int main() {
	cin >> N;
	init(N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> rec[i][j];
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			sum[i][j] = sum[i - 1][j] + rec[i][j];
		}
	}
	int ans = -1e9;
	int msum = -1e9;
	for (int i = 1; i <= N; i++) { //upperbound
		for (int j = i; j <= N; j++) { //lowerbound
			count(i, j);
			msum = -1e9;
			for (int k = 1; k <= N; k++) {
				msum = max(msum, 0) + col[k];
				ans = max(msum, ans);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}