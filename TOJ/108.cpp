//TOJ 108

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	while (b--) {
		int value, buy;
		cin >> value >> buy;
		a += value * buy;
	}
	cout << (a - c) / 4 << '\n';
	return 0;
}