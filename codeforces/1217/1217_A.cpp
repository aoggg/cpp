#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int STR, INT, EXP;
		cin >> STR >> INT >> EXP;
		int l = 0, r = EXP;
		while (l < r) {
			int mid = (l + r) / 2 + (l + r) % 2;
			if (STR + (EXP - mid) > INT + mid) {
				l = mid;
			}
			else {
				r = mid - 1;
			}
		}
		cout << l + (STR + (EXP - l) > INT + l) << '\n';
	}
	return 0;
}