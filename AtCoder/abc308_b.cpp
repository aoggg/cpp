// Problem: B - Default Price
// Contest: AtCoder - AtCoder Beginner Contest 308
// URL: https://atcoder.jp/contests/abc308/tasks/abc308_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 105;

string C[MAXN], D[MAXN];
int P[MAXN];
int M;

int find_price(string s) {
	for (int i = 1; i <= M; i++) {
		if (s == D[i]) return P[i];
	}
	return P[0];
}

int main() {
	int N;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> C[i];
	}
	for (int i = 1; i <= M; i++) {
		cin >> D[i];
	}
	for (int i = 0; i <= M; i++) {
		cin >> P[i];
	}
	int ans = 0;
	for (int i = 1; i <= N; i++) {
		ans += find_price(C[i]);
	}
	cout << ans << '\n';
	return 0;
}