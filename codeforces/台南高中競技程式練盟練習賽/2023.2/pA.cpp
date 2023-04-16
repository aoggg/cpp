// Problem: A. 走鐘
// Contest: Codeforces - 台南高中競技程式練盟練習賽-二月測試場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/428667/problem/A
// Memory Limit: 256 MB
// Time Limit: 250 ms

#include <iostream>
using namespace std;

int main() {
	int h, m, s;
	scanf("%d%d%d", &h, &m, &s);
	int timea = h * 3600 + m * 60 + s;
	scanf("%d%d%d", &h, &m, &s);
	int timeb = h * 3600 + m * 60 + s;
	int diff = abs(timea - timeb);
	diff = min(diff, 86400 - diff);
	printf("%d %d %d\n", diff / 3600, diff / 60 % 60, diff % 60);
	return 0;
}