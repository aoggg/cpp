// Problem: C - Distribution
// Contest: AtCoder - AtCoder Beginner Contest 214
// URL: https://atcoder.jp/contests/abc214/tasks/abc214_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <queue>
using namespace std;

const int MAXN = 2e5 + 5;

priority_queue<int, vector<int>, greater<int>> receive[MAXN];
int S[MAXN], T[MAXN];
int ans[MAXN];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", S + i);
	}
	int fastest = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", T + i);
		receive[i].push(T[i]);
		if (T[fastest] > T[i]) {
			fastest = i;
		}
	}
	ans[fastest] = receive[fastest].top();
	for (int i = 1, now = fastest + 1; i < N; i++, now++) {
		now %= N;
		int front = (now - 1 + N) % N;
		receive[now].push(receive[front].top() + S[front]);
		ans[now] = receive[now].top();
	}
	for (int i = 0; i < N; i++) {
		printf("%d\n", ans[i]);
	}
	return 0;
}