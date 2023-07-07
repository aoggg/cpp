// Problem: D - Mismatched Parentheses
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 307)
// URL: https://atcoder.jp/contests/abc307/tasks/abc307_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int N;
string S;
int pos;

void substr(string &s) {
	bool FT = true;
	string ss = "";
	for (; pos < N; pos++) {
		if (!FT && S[pos] == '(') {
			substr(ss);
			if (pos < N && S[pos] == '(') {
				pos--;
				cerr << pos << '\n';
				continue;
			}
		}
		FT = false;
		if (pos < N && S[pos] == ')') {
			ss = "";
			pos++;
			return;
		}
		if (pos < N) {
			ss += S[pos];
		}
	}
	s += ss;
	return;
}

int main() {
	cin >> N;
	cin >> S;
	string ans = "";
	for (pos = 0; pos < N; pos++) {
		if (S[pos] == '(') {
			substr(ans);
		}
		// cerr << S[pos] << '\n';
		// cerr << pos << ' ' << N << '\n';
		if (pos < N && S[pos] != '(') {
			ans += S[pos];
		}
		if (pos < N && S[pos] == '(') pos--;
	}
	cout << ans << '\n';
	return 0;
}