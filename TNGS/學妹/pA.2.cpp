// Problem: A. 反函數
// Contest: Codeforces - 選幹考好欸
// URL: https://codeforces.com/gym/445760/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <iomanip>
using namespace std;

const double EPS = 1e-7;

int a, b, c, d;

double f(double x) {
	return a * x * x * x + b * x * x + c * x + d;
}

int main() {
	int q;
	cin >> a >> b >> c >> d >> q;
	while (q--) {
		double res;
		cin >> res;
		double l = -1e9, r = 1e9;
		while (r > l && r - l > EPS) {
			cerr << l << ' ' << r << '\n';
			double mid = (l + r) / 2;
			// cerr << mid << '\n';
			if (f(mid) > res) r = mid;
			else l = mid;
		}
		cout << fixed << setprecision(10) << r << '\n';
	}
	return 0;
}