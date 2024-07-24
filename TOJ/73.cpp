// TOJ 73
// 2024-06-29

#include <iostream>
#include <iomanip>
#define double long double
using namespace std;

const int MAXN = 15;
const double EPS = 1e-9;

int N;
double a[MAXN];

double f(double x) {
	double re = -x + a[0];
	for (int i = 1; i < N; i++) re *= (x - a[i]);
	return re;
}

double ternary_search(double l, double r) {
	double ml, mr;
	while (r - l > EPS) {
		double step = (r - l) / 3;
		ml = l + step;
		mr = ml + step;
		if (f(ml) < f(mr)) l = ml;
		else r = mr;
	}
	return l;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) cin >> a[i];
	int P;
	cin >> P;
	double l = max(a[P], (double)0.0);
	double r = min(a[P + 1], (double) 1e5);
	cout << fixed << setprecision(6) << ternary_search(l, r) << '\n';
	return 0;
}