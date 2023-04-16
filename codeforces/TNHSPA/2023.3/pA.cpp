// Problem: A. 石頭
// Contest: Codeforces - 台南高中競技程式練盟練習賽-三月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/431691/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 5;

ll stone[MAXN];

int main() {
	ll total = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%lld", stone + i);
		total += stone[i];
	}
	if (total % 3 != 0) {
		puts("-1");
	}
	else {
		int higher = 0, lower = 0;
		for (int i = 0; i < 3; i++) {
			if (stone[i] > total / 3) {
				higher++;
			}
			if (stone[i] < total / 3) {
				lower++;
			}
		}
		printf("%d\n", max(higher, lower));
	}
	return 0;
}