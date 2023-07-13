// Problem: A - Similar String
// Contest: AtCoder - NS Solutions Corporation Programming Contest 2023（AtCoder Beginner Contest 303）
// URL: https://atcoder.jp/contests/abc303/tasks/abc303_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	string S, T;
	cin >> S >> T;
	bool similar = true;
	for (int i = 0; i < N; i++) {
		if (S[i] != T[i]) {
			if (!((S[i] == '0' && T[i] == 'o') || (S[i] == 'o' && T[i] == '0') || (S[i] == '1' && T[i] == 'l') || (S[i] == 'l' && T[i] == '1'))) {
				similar = false;
				break;
			}
		}
	}
	if (similar) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}