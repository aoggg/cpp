// Problem: B - Snake Toy
// Contest: AtCoder - AtCoder Beginner Contest 067
// URL: https://atcoder.jp/contests/abc067/tasks/abc067_b
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> l;

int main() {
	int N, K;
	scanf("%d%d", &N, &K);
	for (int i = 0; i < N; i++) {
		int n;
		scanf("%d", &n);
		l.push(n);
	}
	int ans = 0;
	for (int i = 0; i < K; i++) {
		ans += l.top();
		l.pop();
	}
	printf("%d\n", ans);
	return 0;
}