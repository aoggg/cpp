// Problem: B. 浠爆氣流直播
// Contest: Codeforces - 留社考測試
// URL: https://codeforces.com/group/yifSBS4PJN/contest/417296/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 1e6 + 5;

long long a[MAXN], point[MAXN][3];

int main() {
	int l;
	scanf("%d", &l);
	for (int i = 0; i < l; i++) {
		scanf("%lld", a + i);
	}
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < 3; j++) {
			point[i][j] = -1e16;
		}
	}
	point[0][0] = a[0];
	for (int i = 1; i < l; i++) {
		point[i][0] = point[i - 1][0] + a[i];
		point[i][1] = max(point[i - 1][0], point[i - 1][1]) + 2 * a[i];
		point[i][2] = max(point[i - 1][1], point[i - 1][2]) + 3 * a[i];
	}
	printf("%lld\n", point[l - 1][2]);
	return 0;
}