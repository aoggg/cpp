// Problem: F - LCS
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_f
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int LCS[3001][3001];

int main() {
	string s, t;
	cin >> s >> t;
	int ls = s.size(), lt = t.size();
	s = ' ' + s;
	t = ' ' + t;
	for (int i = 1; i <= ls; i++) {
		for (int j = 1; j <= lt; j++) {
			if(s[i] == t[j]) {
				LCS[i][j] = LCS[i - 1][j - 1] + 1;
			}
			else {
				LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
			}
		}
	}
	string ans = "";
	int i = ls, j = lt;
	while (i > 0 && j > 0) {
		if (s[i] == t[j]) {
			ans = s[i] + ans;
			i--;
			j--;
		}
		else if (LCS[i - 1][j] > LCS[i][j - 1]) {
			i--;
		}
		else {
			j--;
		}
	}
	cout << ans << '\n';
	return 0;
}