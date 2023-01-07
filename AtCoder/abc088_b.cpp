// Problem: B - Card Game for Two
// Contest: AtCoder - AtCoder Beginner Contest 088
// URL: https://atcoder.jp/contests/abc088/tasks/abc088_b
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e2 + 5;

int a[MAXN];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", a + i);
	}
	sort(a, a + N, greater<int>());
	int Alice = 0, Bob = 0;
	for (int i = 0; i < N; i++) {
		if (i % 2 == 0) {
			Alice += a[i];
		}
		else {
			Bob += a[i];
		}
	}
	printf("%d\n", abs(Alice - Bob));
	return 0;
}