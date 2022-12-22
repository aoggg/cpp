// Problem: A - Duplex Printing
// Contest: AtCoder - AtCoder Beginner Contest 157
// URL: https://atcoder.jp/contests/abc157/tasks/abc157_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int ans = N / 2;
	if (N % 2 != 0) {
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}