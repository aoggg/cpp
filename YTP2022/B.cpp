#include <iostream>
using namespace std;

const int MAXN = 99999;

int TurnNumber(string s) {
	// cout << s << '\n';
	int num = 0;
	for (int i = 0; i < s.size(); i++) {
		num *= 3;
		num += s[i] - '0';
		if (num > MAXN) {
			// cout << "owo?\n";
			return 0;
		}
	}
	// cout << num << '\n';
	return num;
}

int main() {
	int t;
	cin >> t;
	int ans = 0;
	for (int cases = 0; cases < t; cases++) {
		string s;
		cin >> s;
		int n = 0;
		for (int i = 0; i < s.size(); i++) {
			n += s[i] - '0';
		}
		if (s[0] != '2') {
			if (n % 3 != cases % 3) {
				ans += TurnNumber(s);
			}
		}
		else { //s[0] == 2
			if (n % 3 == cases % 3) {
				ans += TurnNumber(s);
			}
			else {
				s[0] = '1';
				n--;
				if (n % 3 == cases % 3) {
					ans += TurnNumber(s);
					continue;
				}
				s[0] = '0';
				n--;
				if (n % 3 == cases % 3) {
					// cout << "hi\n";
					ans += TurnNumber(s);
					continue;
				}
			}
		}
		// cout << ans << '\n';
	}
	cout << ans << '\n';
	return 0;
}