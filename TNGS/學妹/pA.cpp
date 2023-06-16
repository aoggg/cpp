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
		double now = -1e9, step = 2e9;
		while (step - 0 > EPS) {
			double next = now + step;
			cerr << next << '\n';
			if (next > 1e9 || f(next) > res) step /= 2;
			else now = next;		
		}
		cout << fixed << setprecision(10) << now << '\n';
	}	
	return 0;
}