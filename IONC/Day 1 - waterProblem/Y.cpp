// Problem: Y. Pangram
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/Y
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

bool appeared[26];

int main() {
	int n;
	cin >> n;
	while (n--) {
		char c;
		cin >> c;
		if (c >= 'A' && c <= 'Z') {
			appeared[c - 'A'] = true;
		}
		else {
			appeared[c - 'a'] = true;
		}
	}
	bool yes = true;
	for (int i = 0; i < 26; i++) {
		if (!appeared[i]) {
			yes = false;
			break;
		}
	}
	if (yes) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}