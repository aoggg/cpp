// Problem: A. Cut the Triangle
// Contest: Codeforces - Educational Codeforces Round 140 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1767/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		bool possiblex = true, possibley = true;
		pair<int, int> vertex[4];
		for (int i = 0; i < 3; i++) {
			scanf("%d%d", &vertex[i].first, &vertex[i].second);
		}
		for (int i = 0; i + 1 < 3; i++) {
			for (int j = i + 1; j < 3; j++) {
				if (vertex[i].first == vertex[j].first) {
					possiblex = false;
				}
				if (vertex[i].second == vertex[j].second) {
					possibley = false;
				}
			}
		}
		if (possiblex || possibley) {
			puts("YES");
		} 
		else {
			puts("NO");
		}
	}
	return 0;
}