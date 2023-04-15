// Problem: C. Find and Replace
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

const int MAXN = 2e3 + 5;

int place[26];
char s[MAXN];

void init() {
	for (int i = 0; i < 26; i++) {
		place[i] = -1;
	}
	return;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		init();
		int n;
		scanf("%d", &n);
		scanf("%s", &s);
		bool possible = true;
		for (int i = 0; i < n; i++) {
			if (place[s[i] - 'a'] == -1) {
				place[s[i] - 'a'] = i;
			}
			else if ((i - place[s[i] - 'a']) & 1) {
				possible = false;
				break;
			}
			else {
				place[s[i] - 'a'] = i;
			}
		}
		if (possible) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
	return 0;
}