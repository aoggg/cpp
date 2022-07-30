// Problem: Z. Anton and Danik
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/Z
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int na = 0, nd = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			na++;
		}
		else {
			nd++;
		}
	}
	if (na > nd) {
		cout << "Anton\n";
	}
	else if (nd > na) {
		cout << "Danik\n";
	}
	else {
		cout << "Friendship\n";
	}
	return 0;
}