// Problem: A. Anna 與回文
// Contest: Codeforces - 台南高中競技程式練盟練習賽-五月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/444505/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

const int MAXN = 30;

bool appeared[MAXN];

int main() {
	int n;
	scanf("%d\n", &n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		char c;
		scanf("%c\n", &c);
		if (appeared[c - 'A']) {
			ans += 2;
		}
		appeared[c - 'A'] = !appeared[c - 'A'];
	}
	if (ans < n) {
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}