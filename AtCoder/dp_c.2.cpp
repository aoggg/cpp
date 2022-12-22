// Problem: C - Vacation
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int h[100001][3], happiness[100001][3];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> h[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) {
				happiness[i][j] = h[i][j];
			}
			else {
				happiness[i][j] = max(happiness[i - 1][(j + 1) % 3], happiness[i - 1][(j + 2) % 3]) + h[i][j];
			}
		}
	}
	int ans = max(happiness[N - 1][0], happiness[N - 1][1]);
	ans = max(ans, happiness[N - 1][2]);
	cout << ans << '\n';
	return 0;
}