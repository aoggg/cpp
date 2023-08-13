// Problem: C - Reversible
// Contest: AtCoder - freee Programming Contest 2023（AtCoder Beginner Contest 310）
// URL: https://atcoder.jp/contests/abc310/tasks/abc310_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
using mp = map<string, bool>;
using ll = long long;

mp appeared;

int main() {
	int N;
	cin >> N;
	ll ans = N;
	while (N--) {
		string s;
		cin >> s;
		string rs = s;
		reverse(rs.begin(), rs.end());
		if (appeared[s] || appeared[rs]) ans--;
		appeared[s] = appeared[rs] = true;
	}
	cout << ans << '\n';
	return 0;
}