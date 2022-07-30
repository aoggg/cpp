#include <iostream>
using namespace std;

int main() {
	cout << "ouob" << endl;
	int N;
	cin >> N;
	int l = 1, r = N;
	for (int i = 0; i < 18 && l < r; i++) {
		cout << "? " << l << ' ' << r << endl;
		int mid = (l + r) / 2;
		int diff;
		cin >> diff;
		if (diff <= 0) {
			l = mid + 1;
		}
		else {
			r = mid;
		}
	}
	cout << "! " << l << endl;
	return 0;
}