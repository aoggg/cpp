#include<iostream>
#include<iomanip>
using namespace std;

const double EPS = 1e-6;

int main(){
	double x;
	cin >> x;
	double l, r;
	if (x >= 1){
		l = 1, r = x;
	}
	else {
		l = 0, r = 1;
	}
	while (r - l >= EPS){
		double m = (l + r) / 2;
		if (m * m < x){
			l = m;
		}
		else {
			r = m;
		}
	}
	cout << fixed << setprecision (6) << (r + l) / 2 << '\n';
	return 0;
}