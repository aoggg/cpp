// Problem: C - Find it!
// Contest: AtCoder - Toyota Programming Contest 2023#4（AtCoder Beginner Contest 311）
// URL: https://atcoder.jp/contests/abc311/tasks/abc311_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;

int A[MAXN];
int route[MAXN];
int ans[MAXN];
int asize = 0;
bool visited[MAXN];

void trace(int now, int begin) {
	do {
		ans[asize] = route[now];
		asize++;
		now--;
	} while (route[now] != begin);
	return;
}

void BFS() {
	for (int now = 0, next = 1; now < next; now++) {
		int v = route[now];
		if (visited[v]) {
			trace(now, v);
			return;
		}
		else {
			route[next] = A[v];
			next++;
		}
		visited[v] = true;
	}
}

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	for (int i = 1; i <= N && asize == 0; i++) {
		if (!visited[i]) {
			route[0] = i;
			BFS();
		}
	}
	cout << asize << '\n';
	bool FT = true;
	while (asize--) {
		if (!FT) cout << ' ';
		FT = false;
		cout << ans[asize];
	}
	cout << '\n';
	return 0;
}