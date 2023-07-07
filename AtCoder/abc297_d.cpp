// Problem: D - Count Subtractions
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_d#
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll A, B;
	scanf("%lld%lld", &A, &B);
	ll ans = 0;
	while (A != B) {
		if (A > B) {
			if (A % B == 0) {
				ans += A / B - 1;
				break;
			}
			else {
				ans += A / B;
			}
			A %= B;
		}
		else {
			if (B % A == 0) {
				ans += B / A - 1;
				break;
			}
			else {
				ans += B / A;
			}
			B %= A;
		}
	}
	printf("%lld\n", ans);
	return 0;
}