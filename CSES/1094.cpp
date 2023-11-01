// Problem: Increasing Array
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1094
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 08:21:54

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

int x[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	ll moved = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", x + i);
	}
	for (int i = 1; i < n; i++) {
		moved += max(0, x[i - 1] - x[i]);
		x[i] = max(x[i], x[i - 1]);
	}
	printf("%lld\n", moved);
	return 0;
}