// TIOJ 1882
// 2024-06-26

#include <iostream>
#include <iomanip>
using namespace std;

const double EPS = 1e-9;
const int MAXN = 1e4 + 5;

struct func{
	double a, b, c;
	
	double cal(double x) {	
		return a * x * x + b * x + c;
	}
};

func f[MAXN];
int n;

double L(double x) {
	double re = f[0].cal(x);
	for (int i = 1; i < n; i++) {
		re = min(re, f[i].cal(x));
	}
	return re;
}

double ternary_search(double l, double r) {
	double ml, mr;
	while (r - l > EPS) {
		double step = (r - l) / 3;
		ml = l + step;
		mr = ml + step;
		if (L(ml) < L(mr)) l = ml;
		else r = mr;
	}
	return r;
	
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> f[i].a >> f[i].b >> f[i].c;
	cout << fixed << setprecision(6) << ternary_search(0, 90 * 24 * 60) << '\n';	
	return 0;
}