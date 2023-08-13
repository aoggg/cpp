// Problem: B - Vacation Together
// Contest: AtCoder - Toyota Programming Contest 2023#4（AtCoder Beginner Contest 311）
// URL: https://atcoder.jp/contests/abc311/tasks/abc311_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 105;

bool occupied[MAXN];

int main() {
	int N, D;
	cin >> N >> D;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < D; j++) {
			char c;
			cin >> c;
			if (c == 'x') {
				occupied[j] = true;
			}
		}
		cerr << '\n';
	}
	int ans = 0;
	int cur = 0;
	for (int i = 0; i < D; i++) {
		if (!occupied[i]) cur++;
		else {
			ans = max(ans, cur);
			cur = 0;
		}
	}
	cout << max(ans, cur) << '\n';
	return 0;
}