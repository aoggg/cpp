// Problem: B - Base 2
// Contest: AtCoder - Toyota Programming Contest 2023#3（AtCoder Beginner Contest 306）
// URL: https://atcoder.jp/contests/abc306/tasks/abc306_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using ll = unsigned long long;

const int MAXN = 70;

ll A[MAXN];

int main() {
	ll n = 1, ans = 0;
	int i;
	for (i = 0, n = 1; i < 64; i++, n <<= 1) {
		cin >> A[i];
		ans += A[i] * n;
		cerr << n << '\n';
	}
	cout << ans << '\n';
	return 0;
}