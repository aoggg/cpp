// Problem: D - Knapsack 1
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#define ll long long
using namespace std;

int w[105]; 
ll v[105], value[105][100010];

int main() {
	int N, W;
	cin >> N >> W;
	for (int i = 1; i <= N; i++) {
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= W; j++) {
			if (j >= w[i]) {
				value[i][j] = max(value[i - 1][j], value[i - 1][j - w[i]] + v[i]);
			}
			else {
				value[i][j] = value[i - 1][j];
			}
		}
	}
	cout << value[N][W] << '\n';
	return 0;
}