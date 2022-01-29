#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	double a, b, theta;
	cin >> a >> b >> theta;
	cout << fixed << setprecision(2) << a * b * sin(theta) / 2 << '\n';
	return 0;
}
