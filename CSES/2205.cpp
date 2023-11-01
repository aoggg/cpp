// Problem: Gray Code
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2205
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 14:53:17

#include <iostream>
using namespace std;

const int MAXN = 65540;

string code[MAXN];
string unit[MAXN];
int l = 2;

void init() {
	code[0] = "0";
	code[1] = "1";
}

void ctou() {
	for (int i = 0; i < l; i++) unit[i] = code[i];
}

int main() {
	int n;
	cin >> n;
	init();
	for (int i = 2; i <= n; i++) {
		ctou();
		for (int i = 0; i < l; i++) {
			code[i] = '0' + unit[i];
			code[l + i] = '1' + unit[l - 1 - i];
		}
		l <<= 1;
	}
	for (int i = 0; i < l; i++) {
		cout << code[i] << '\n';
	}
	return 0;
}