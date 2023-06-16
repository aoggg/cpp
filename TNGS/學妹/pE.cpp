// Problem: E. a + b problem
// Contest: Codeforces - 選幹考好欸
// URL: https://codeforces.com/gym/445760/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;

int a[MAXN], b[MAXN], c[MAXN];

int main() {
	string s;
	getline(cin, s);
	int pos = 0;
	int la = 0, lb = 0;
	for (pos = s.size() - 1, lb = 0; s[pos] != ' '; pos--, lb++) {
		b[lb] = s[pos] - '0';
		cerr << b[lb];
	}
	cerr << '\n';
	for (la = 0, pos--; pos >= 0; pos--, la++) {
		a[la] = s[pos] - '0';
		cerr << a[la];
	}
	cerr << '\n';
	int o;
	cin >> o;
	int lc = 0;
	if (o == 1) { //a - b
		for (int i = 0; lc < max(la, lb); lc++, i++) {
			if (a[i] < b[i]) {
				a[i + 1]--;
				c[lc] = a[i] + 10 - b[i];
			}
			else {
				c[lc] = a[i] - b[i];
			}
			cerr << c[lc];
		}
		lc++;
	}
	else {
		for (int i = 0; lc < max(la, lb); lc++, i++) {
			if (c[lc] + a[i] + b[i] >= 10) {
				c[lc + 1]++;
				c[lc] += a[i] + b[i] - 10;
			}
			else {
				c[lc] += a[i] + b[i];
			}
			cerr << c[lc];
		}
		lc++;
	}
	cerr << '\n';
	while (c[lc] == 0 && lc != 0) {
		lc--;
	}
	for (int i = lc; i >= 0; i--) {
		cout << c[i];
	}
	cout << '\n';
	return 0;
}