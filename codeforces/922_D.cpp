// Problem: D. Robot Vacuum Cleaner
// Contest: Codeforces - Codeforces Round 461 (Div. 2)
// URL: https://codeforces.com/problemset/problem/922/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time: 2024-06-25 15:38:32

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 1e5 + 5;

string t[MAXN];

ll cal(string s) {
	ll ns = 0, re = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 's') ns++;
		else re += ns;
	}
	re += ns;
	return re;
}

bool cmp(string a, string b) {
	if (cal(a + b) > cal(b + a)) return true;
	else return false;
}

void output(int n) {
	for (int i = 0; i < n; i++) cerr << t[i] << '\n';
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> t[i];
	sort(t, t + n, cmp);
	ll ans = 0, s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < t[i].size(); j++) {
			if (t[i][j] == 's') s++;
			else ans += s;
		}
	}
	output(n);
	cout << ans << '\n';
	return 0;
}