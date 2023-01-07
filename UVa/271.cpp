// Problem: 271 - Simply Syntax
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=207
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

bool check(const string &s, const int &pos, const int &total) {
	if (pos == -1 && total == 1) {
		return true;
	}
	if (pos == -1) {
		return false;
	}
	bool res;
	if (s[pos] >= 'p' && s[pos] <= 'z') {
		res = check(s, pos - 1, total + 1);
	}
	else if (s[pos] == 'N' && total >= 1) {
		res = check(s, pos - 1, total);
	}
	else if ((s[pos] == 'C' || s[pos] == 'D' || s[pos] == 'E' || s[pos] == 'I') && total >= 2) {
		res = check(s, pos - 1, total - 1);		
	}
	else {
		res = false;
	}
	return res;
}

int main() {
	string s;
	char c[260];
	while (scanf("%s", c) != EOF) {
		s = c;
		if (check(s, s.size() - 1, 0)) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
	return 0;
}