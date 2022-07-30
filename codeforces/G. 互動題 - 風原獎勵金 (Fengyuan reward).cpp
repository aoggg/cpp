#include <iostream>
using namespace std;

int main() {
	cout << '@' << endl;
	int N;
	cin >> N;
	int l = 1, r = N;
	cout << "? " << l << ' ' << r << endl;
	int biggest;
	cin >> biggest;
	for (int i = 0; i < 10; i++) {
		int mid = (l + r) / 2;
		cout << "? " << l << ' ' << mid << endl;
		int T;
		cin >> T;
		if (T != biggest) {
			l = mid + 1;
		}
		else {
			r = mid;
		}
	}
	cout << "! " << l << endl;
	return 0;
}