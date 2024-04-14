// Problem: A - Yay!
// Contest: AtCoder - HUAWEI Programming Contest 2024（AtCoder Beginner Contest 342）
// URL: https://atcoder.jp/contests/abc342/tasks/abc342_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Time: 2024-02-29 23:24:04

#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	char c = s[0];
	bool fs = false;
	if (s[1] != s[0]) {
		if (s[1] == s[2]) {
			ans = 1;
		}
		else {
			ans = 2;
		}
	}
	else {
		for (int i = 2; i < s.size(); i++) {
			if (s[i] != c) {
				ans = i + 1;
				break;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}