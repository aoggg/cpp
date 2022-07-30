// Problem: G. Beru-taxi
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/G
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double EPS = 1e-7; 

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(6);
	double shortest;
	bool FT = true;
	int n;
	cin >> n;
	while (n--) {
		double x, y, v;
		cin >> x >> y >> v;
		double time = sqrt((x - a) * (x - a) + (y - b) * (y - b)) / v + EPS;
		if (FT) {
			FT = false;
			shortest = time;
		}
		shortest = min(shortest, time);
	}
	cout << shortest << '\n';
	return 0;
}