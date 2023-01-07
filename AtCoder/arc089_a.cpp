// Problem: C - Traveling
// Contest: AtCoder - AtCoder Regular Contest 089
// URL: https://atcoder.jp/contests/arc089/tasks/arc089_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int nowt = 0, nowx = 0, nowy = 0;
	bool possible = true;
	while (N--) {
		int t, x, y;
		scanf("%d%d%d", &t, &x, &y);
		int moved = abs(x - nowx) + abs(y - nowy);
		int time = t - nowt;
		if (!(moved <= time && moved % 2 == time % 2)) {
			possible = false;
		}
		nowt = t;
		nowx = x;
		nowy = y;
	}
	if (possible) {
		puts("Yes");
	}
	else {
		puts("No");
	}
	return 0;
}