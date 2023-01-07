// Problem: 024 - Select +／- One（★2）
// Contest: AtCoder - 競プロ典型 90 問
// URL: https://atcoder.jp/contests/typical90/tasks/typical90_x
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 1e3 + 5;

int A[MAXN], B[MAXN];

int main() {
	int N, K;
	scanf("%d%d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d", A + i);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", B + i);
	}
	long long diff = 0;
	for (int i = 0; i < N; i++) {
		diff += abs(A[i] - B[i]);
	}
	if (diff % 2 == K % 2 && diff <= K) {
		puts("Yes");
	}
	else {
		puts("No");
	}
	return 0;
}