#include <iostream>
using namespace std;

int main() {
	int T;
	string s;
	cin >> T >> s;
	for (int i = 0; i < T; i++) {
		int n = s[i];
		n ^= 32;
		cout << (char) n;
	}
	cout << '\n';
	return 0;
}