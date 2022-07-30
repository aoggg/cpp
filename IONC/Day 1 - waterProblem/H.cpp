// Problem: H. PolandBall and Hypothesis
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/H
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 != 0) {
		if (n == 1) {
			cout << 3 << '\n';
		}
		else {
			cout << 1 << '\n';
		}
	} 
	else {
		if (n == 2) {
			cout << 4 << '\n';	
		}
		else {
			cout << n - 2 << '\n';
		}
	}
	return 0;
}