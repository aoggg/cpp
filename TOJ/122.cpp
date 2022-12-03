//TOJ 122

#include <iostream>
using namespace std;

int main() {
	long long pm;
	cin >> pm;
	if (pm < 10) {
		cout << "Y\n";
	}
	else if (pm <= 1000) {
		cout << "X\n";
	}
	else if (pm <= 400 * 1000) {
		cout << "UV\n";
	}
	else if (pm <= 700 * 1000) {
		cout << "VIS\n";
	}
	else if (pm <= 1000000000) {
		cout << "IR\n";
	}
	else {
		cout << "R\n";
	}
	return 0;
}