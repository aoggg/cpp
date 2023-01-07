// ZJ f640

#include <iostream>
using namespace std;

const int MAXN = 15;
char c[MAXN];
string s;

int run(const string &);

int sti(const string &s) {
	int res = 0;
	bool negative = false;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '-') {
			negative = true;
			continue;
		}
		res *= 10;
		res += s[i] - '0';
	}
	if (negative) {
		res = -res;
	}
	return res;
}

int f() {
	scanf("%s", c);
	s = c;
	int x = run(s);
	fprintf(stderr, "f(%d) = %d\n", x, 2 * x - 3);
	return 2 * x - 3;
}

int g() {
	scanf("%s", c);
	s = c;
	int x = run(s);
	scanf("%s", c);
	s = c;
	int y = run(s);
	fprintf(stderr, "g(%d, %d) = %d\n", x, y, 2 * x + y - 7);
	return 2 * x + y - 7;
}

int h() {
	scanf("%s", c);
	s = c;
	int x = run(s);
	scanf("%s", c);
	s = c;
	int y = run(s);
	scanf("%s", c);
	s = c;
	int z = run(s);
	fprintf(stderr, "h(%d, %d, %d) = %d\n", x, y, z, 3 * x - 2 * y + z);
	return 3 * x - 2 * y + z;
}

int run(const string &s) {
	if (s == "f") {
		return f();
	}
	else if (s == "g") {
		return g();
	}
	else if (s == "h"){
		return h();
	}
	else {
		return sti(s);
	}
}

int main() {
	scanf("%s", c);
	s = c;
	int ans = run(s);
	printf("%d\n", ans);
	return 0;
}