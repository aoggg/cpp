#include <iostream>
using namespace std;

int add(int a, int b) {
	int res;
	int c = a & b, d = a ^ b;
	if (c == 0) {
		return d;
	}
	c <<= 1;
	res = add(c, d);
	return res;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << '\n';
	return 0;
}