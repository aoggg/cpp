// Problem: G1. Subsequence Addition (Easy Version)
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/G1
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAXN = 5e3 + 5;

int c[MAXN];
bool exceed[MAXN];
vector<int> sum;

void init() {
	sum.clear();
	for (int i = 0; i < MAXN; i++) {
		exceed[i] = false;
	}
	return;
}

void add(int n) {
	// vector<int> v;
	// v.push_back(sum);
	// for (int i = 0; i < v.size(); i++) {
		// int num = v[i] + n;
		// if (!exceed[num] && num <= 5000) {
			// sum.push_back(num);
		// }
	// }
	return;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		init();
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", c + i);
		}
		sort(c, c + n);
		exceed[1] = true;
		sum.push_back(1);
		bool possible = true;
		for (int i = 0; i < n; i++) {
			if (!exceed[c[i]]) {
				possible = false;
				break;
			}
			add(c[i]);
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