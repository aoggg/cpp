//TOJ 111

#include <iostream>
using namespace std;

int main() {
	long long X, Y;
	cin >> X >> Y;
	long long ans = 1;
	for (bool plus = true; ans % X != 0; plus = !plus) {
		// cout << plus << '\n';
		if (plus) {
			ans++;
		}
		else {
			ans *= 2;
		}
	}	
	if (ans % Y != 0) {
		cout << "left\n";
	}
	else {
		cout << "right\n";
	}
	return 0;
}