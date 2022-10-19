// Problem: E - Knapsack 2
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

long long value[100005], w[105], v[105];

int main() {
	long long N, W;
	cin >> N >> W;
	for (int i = 1; i <= N; i++) {
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i <= 100000; i++) {
		value[i] = 1e18;
	}
	value[0] = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 100000; j >= v[i]; j--) {
			value[j] = min(value[j], value[j - v[i]] + w[i]);
		}
	}
	int ans = 0;
	for (int i = 100000; i >= 0; i--) {
		if (value[i] <= W) {
			ans = i;
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}