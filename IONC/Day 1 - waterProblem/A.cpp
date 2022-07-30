// Problem: A. Transformation: from A to B
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int passed[60];

int main() {
	int a, b;
	cin >> a >> b;
	int total = 1;
	passed[0] = b;
	bool possible = false;
	while (b > 0) {
		if (b < a) {
			possible = false;
			break;
		}
		if (b == a) {
			possible = true;
			break;
		}
		if (b % 10 == 1) {
			b /= 10;
			passed[total] = b;
			total++;
		}
		else if ((b & 1) == 0) {
			b >>= 1;
			passed[total] = b;
			total++;
		}
		else {
			break;
		}
	}
	if (possible) {
		cout << "YES\n";
		cout << total << '\n';
		for (int i = total - 1; i >= 0; i--) {
			cout << passed[i];
			if (i != 0) {
				cout << ' ';
			}
		}
		cout << '\n';
	}
	else {
		cout << "NO\n";
	}
	return 0;
}