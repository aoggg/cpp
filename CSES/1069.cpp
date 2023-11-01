// Problem: Repetitions
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1069
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 08:18:35

#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int rep = 1;
	int ans = -1e9;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) rep++;
		else {
			ans = max(ans, rep);
			rep = 1;
		}
	}
	ans = max(ans, rep);
	cout << ans << '\n';
	return 0;
}