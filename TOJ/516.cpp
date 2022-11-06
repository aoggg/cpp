//TOJ 516

#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	int prime = 0;
	for (int i = 1; prime <= k; i++) {
		bool is_prime = true;
		if (i == 2) {
			is_prime = true;
		}
		if (i == 1) {
			is_prime = false;
		}
		else {
			for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					is_prime = false;
					break;
				}
			}
		}
		if (is_prime) {
			prime++;
			if (prime == k + 1) {
				cout << i - 1 << '\n';
				break;
			}
		}
	}
	return 0;
}