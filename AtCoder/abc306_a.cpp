// Problem: A - Echo
// Contest: AtCoder - Toyota Programming Contest 2023#3（AtCoder Beginner Contest 306）
// URL: https://atcoder.jp/contests/abc306/tasks/abc306_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) cout << s[i] << s[i];
	cout << '\n';
	return 0;
}