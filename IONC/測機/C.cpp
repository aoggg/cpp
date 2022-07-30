// Problem: C. 猜數字 (bsearch)
// Contest: Codeforces - 測機
// URL: https://codeforces.com/group/z3GP4YeQl0/contest/391717/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int l = 1, r = N, m;
	int times = 24;
	while (times--) {
		m = (l + r) / 2;
		cout << m << endl;
		string s;
		cin >> s;
		// cout << s << endl;
		if (s == ">=") {
			l = m;
		}
		else if (s == "<") {
			r = m - 1;
		}
	}
	if (l == r) {
		cout << "! " << l << endl;	
	}
	else {
		cout << r << endl;
		string s;
		cin >> s;
		if (s == ">=") {
			cout << "! " << r << endl;
		}
		else {
			cout << "! " << l << endl;
		}
	}
	return 0;
}