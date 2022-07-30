#include <iostream>
#include <algorithm>
using namespace std;

int money[20000];

int main() {
	int t;
	cin >> t;
	for (int cases = 0; cases < t; cases++) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> money[i];
		}
		sort(money, money + n);
		int discount = 0;
		for (int i = n - 3; i >= 0; i -= 3) {
			discount += money[i];
		}
		cout << discount << '\n';
	}
	return 0;
}