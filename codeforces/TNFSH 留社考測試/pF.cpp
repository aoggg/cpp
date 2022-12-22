// Problem: F. 移動(move)
// Contest: Codeforces - 留社考測試
// URL: https://codeforces.com/group/yifSBS4PJN/contest/417296/problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long x, y;
		scanf("%lld%lld", &x, &y);
		long long d = x * x + y * y;
		long long sd = sqrt(d);
		if (x == 0 && y == 0) {
			puts("0");
		}
		else if (sd * sd == d) {
			puts("1");
		}
		else {
			puts("2");
		}
	}
	return 0;
}