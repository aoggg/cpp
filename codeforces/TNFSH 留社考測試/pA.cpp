// Problem: A. 時鐘
// Contest: Codeforces - 留社考測試
// URL: https://codeforces.com/group/yifSBS4PJN/contest/417296/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int h, m, s;
	scanf("%d%d%d", &h, &m, &s);
	int v;
	scanf("%d%d%d", &v);
	int hour = v / 60 / 60, min = (v / 60) % 60, sec = v % 60;
	s += sec;
	m += min;
	h += hour;
	if (s >= 60) {
		m += s / 60;
		s %= 60;
	}
	if (m >= 60) {
		h += m / 60;
		m %= 60;
	}
	if (h >= 24) {
		h %= 24;
	}
	printf("%d %d %d\n", h, m, s);
	return 0;
}