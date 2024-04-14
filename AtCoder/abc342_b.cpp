// Problem: B - Which is ahead?
// Contest: AtCoder - HUAWEI Programming Contest 2024（AtCoder Beginner Contest 342）
// URL: https://atcoder.jp/contests/abc342/tasks/abc342_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Time: 2024-02-29 23:30:28

#include <iostream>
using namespace std;

const int MAXN = 105;

int pos[MAXN];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int person;
		scanf("%d", &person);
		pos[person] = i;
	}
	int Q;
	scanf("%d", &Q);
	while (Q--) {
		int a, b;
		scanf("%d%d", &a, &b);
		if (pos[a] < pos[b]) printf("%d", a);
		else printf("%d", b);
		puts("");
	}
	return 0;
}