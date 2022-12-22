// Problem: C. 齒輪組(gears)
// Contest: Codeforces - 留社考測試
// URL: https://codeforces.com/group/yifSBS4PJN/contest/417296/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXN = 105;
const double EPS = 1e-6;

double a[MAXN];

int main() {
	int n;
	double v;
	cin >> n >> v;
	cout << fixed << setprecision(6);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int c;
		cin >> c;
		if (c == 1) {
			v = v * a[i] / a[i + 1];
		}
	}
	cout << v << '\n';
	return 0;
}