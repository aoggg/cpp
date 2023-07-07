// Problem: B - racecar
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 307)
// URL: https://atcoder.jp/contests/abc307/tasks/abc307_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 105;

string s[MAXN];

bool check(string a, string b) {
	string s1 = a + b;
	string r1 = s1;
	reverse(s1.begin(), s1.end());
	string s2 = b + a;
	string r2 = s2;
	reverse(s2.begin(), s2.end());
	if (s1 == r1 || s2 == r2) return true;
	return false;
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}
	bool ok = false;
	for (int i = 0; i < N && !ok; i++) {
		for (int j = i + 1; j < N; j++) {
			if (check(s[i], s[j])) {
				ok = true;
				break;
			}
		}
	}
	if (ok) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}