// Problem: B. 魔法師
// Contest: Codeforces - 台南高中競技程式練盟練習賽-四月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/438246/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e5 + 5;

char c[MAXN];

int main() {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	scanf("%s", c);
	string s1 = c;
	int change = 0;
	for (int i = 0; i < s1.size() && change < m; i++) {
		if (s1[i] != 'a') {
			s1[i] = 'a';
			change++;
		}
	}
	string s2 = c;
	sort(s2.begin(), s2.end());
	change = 0;
	for (int i = s2.size() - 1; i >= 0 && change < m - k; i--) {
		if (s2[i] != 'a') {
			s2[i] = 'a';
			change++;
		}
	}
	sort(s2.begin(), s2.end());
	if (m - k < 0 || s1 < s2) {
		printf("%s\n", s1.c_str());
	}
	else {
		printf("%s\n", s2.c_str());
	}
	return 0;
}