// Problem: C. Dasha and Stairs
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a == b && a == 0) {
		cout << "NO\n";
	}
	else if (abs(a - b) <= 1) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}