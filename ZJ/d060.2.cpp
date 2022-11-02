#include <iostream>
using namespace std;

int main() {
	int m;
	cin >> m;
	m = 25 - m;
	cout << 60 * (m < 0) + m << '\n';
	return 0;
}