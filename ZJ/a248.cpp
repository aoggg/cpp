#include <iostream>
using namespace std;

int main() {
	int a, b, N;
	while (cin >> a >> b >> N) {
		cout << a / b;
		a = (a % b) * 10;
		cout << ".";
		while (N--) {
			cout << a / b;
			a = a % b * 10;
		}
		cout << '\n';
	}
	return 0;
}