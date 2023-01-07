// Problem: Akcija
// Contest: Kattis
// URL: https://open.kattis.com/problems/akcija
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e5 + 5;

int C[MAXN];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", C + i);
	}
	sort(C, C + N, greater<int>());
	long long ans = 0;
	for (int i = 0; i < N; i++) {
		if ((i + 1) % 3 != 0) {
			ans += C[i];
		}
	}
	printf("%lld\n", ans);
	return 0;
}