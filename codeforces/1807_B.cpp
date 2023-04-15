// Problem: B. Grab the Candies
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int mihai = 0, bianca = 0;
		while (n--) {
			int candies;
			scanf("%d", &candies);
			if (candies & 1) {
				bianca += candies;
			}
			else {
				mihai += candies;
			}
		}
		if (mihai > bianca) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
	return 0;
}