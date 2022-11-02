// Problem: Kitten on a Tree
// Contest: Kattis
// URL: https://open.kattis.com/problems/kitten
// Memory Limit: 1024 MB
// Time Limit: 1000 ms

#include <iostream>
#include <string>
using namespace std;

const int MAXN = 105;
const int NO_PARENT = -1;

int parent[MAXN];

int main() {
	int now;
	cin >> now;
	string s;
	for (int i = 0; i < MAXN; i++) {
		parent[i] = NO_PARENT;
	}
	getline(cin, s);
	while (getline(cin, s)) {
		if (s == "-1") {
			break;
		}
		int p = 0, c = 0, i;
		for (i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				break;
			}
			p = p * 10 + s[i] - '0';
		}
		for (i++; i < s.size(); i++) {
			if (s[i] == ' ') {
				parent[c] = p;
				c = 0;
				continue;
			}
			c = c * 10 + s[i] - '0';
		}
		parent[c] = p;
	}
	cout << now;
	while (parent[now] != NO_PARENT) {
		cout << ' ' << parent[now];
		now = parent[now];
	}
	cout << '\n';
	return 0;
}