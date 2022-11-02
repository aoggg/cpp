#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	cout << (a >= 6 && a <= 11) * 590 + (a >= 12 && a <= 17) * 790 + (a >= 18 && a <= 59) * 890 + (a >= 60) * 399 << '\n';
	return 0;
}