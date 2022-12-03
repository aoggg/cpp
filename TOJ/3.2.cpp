#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int a, b;
		cin >> a >> b;
		while (b != 0) {
			a %= b;
			swap(a, b);
		}
		cout << a << '\n';
	}
	return 0;
}