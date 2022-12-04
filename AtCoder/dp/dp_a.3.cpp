// Problem: A - Frog 1
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int h[100001], cost[100001];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}
	cost[0] = 0;
	cost[1] = abs(h[1] - h[0]);
	for (int i = 2; i < N; i++) {
		cost[i] = min(cost[i - 2] + abs(h[i] - h[i - 2]), cost[i - 1] + abs(h[i] - h[i - 1]));
	}
	cout << cost[N - 1] << '\n';
	return 0;
}