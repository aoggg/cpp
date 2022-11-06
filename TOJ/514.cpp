//TOJ 514

#include <iostream>
using namespace std;

int main() {
	int p, q, r;
	cin >> p >> q >> r;
	for (int i = 1000; i <= 9999; i++) {
		int a, b, c, d;
		int num = i;
		d = num % 10;
		num /= 10;
		c = num % 10;
		num /= 10;
		b = num % 10;
		num /= 10;
		a = num % 10;
		num /= 10;
		if (a > b && p == 1) {
			if (b > c && q == 1) {
				if (c > d && r == 1) {
					cout << i << '\n';
				}
				else if (c < d && r == 0) {
					cout << i << '\n';
				}
			}
			else if (b < c && q == 0) {
				if (c > d && r == 1) {
					cout << i << '\n';
				}
				else if (c < d && r == 0) {
					cout << i << '\n';
				}
			}
		}
		else if (a < b && p == 0) {
			if (b > c && q == 1) {
				if (c > d && r == 1) {
					cout << i << '\n';
				}
				else if (c < d && r == 0) {
					cout << i << '\n';
				}
			}
			else if (b < c && q == 0) {
				if (c > d && r == 1) {
					cout << i << '\n';
				}
				else if (c < d && r == 0) {
					cout << i << '\n';
				}
			}
		}
	}
	return 0;
}