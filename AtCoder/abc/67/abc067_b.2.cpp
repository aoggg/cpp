// Problem: B - Snake Toy
// Contest: AtCoder - AtCoder Beginner Contest 067
// URL: https://atcoder.jp/contests/abc067/tasks/abc067_b
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 55;

int l[MAXN];

int main() {
	int N, K;
	scanf("%d%d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d", l + i);
	}
	sort(l, l + N, greater<int>());
	int ans = 0;
	for (int i = 0; i < K; i++) {
		ans += l[i];
	}
	printf("%d\n", ans);
	return 0;
}