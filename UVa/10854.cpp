#include <iostream>
using namespace std;

int counting () {
	int ans = 1;
	string s;
	while (cin >> s) {
		if (s == "ENDPROGRAM") {
			return ans;
		}
		else if (s == "IF") {
			ans *= (counting() + counting());
		}
		else if (s == "ELSE") {
			return ans;
		}
		else if (s == "END_IF") {
			return ans;
		}
	}
}

int main() {
	int t;
	cin >> t;
	for (int cases = 0; cases < t; cases++) {
		cout << counting() << '\n';
	}
	return 0;
}