// Problem: F. Hexadecimal's theorem
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/F
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
using namespace std;

vector<int> F;

int main() {
	int n;
	cin >> n;
	F.push_back(0);
	F.push_back(1);
	int total = 2;
	int a, b, c;
	bool possible = false;
	if (n == 1) {
		possible = true;
		a = b = 0;
		c = 1;
	}
	else if (n == 0) {
		a = b = c = 0;
		possible = true;
	}
	else {
		while (F[total - 1] <= n) {
			if (F[total - 1] == n) {
				possible = true;
				a = 0;
				b = F[total - 3];
				c = F[total - 2];
				break;
			}
			else {
				F.push_back(F[total - 1] + F[total - 2]);
				total++;
			}
		}
	}
	if (possible) {
		cout << a << ' ' << b << ' ' << c << '\n';
	}
	else {
		cout << "I'm too stupid to solve this problem\n";
	}
	return 0;
}