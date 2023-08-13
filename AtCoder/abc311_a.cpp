// Problem: A - First ABC
// Contest: AtCoder - Toyota Programming Contest 2023#4（AtCoder Beginner Contest 311）
// URL: https://atcoder.jp/contests/abc311/tasks/abc311_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

bool appeared[3];

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0, check = 0;
	for (int i = 0; i < n && check < 3; i++) {
		ans++;
		if (!appeared[s[i] - 'A']) {
			appeared[s[i] - 'A'] = true;
			check++;
		}
	}
	cout << ans << '\n';
	return 0;
}