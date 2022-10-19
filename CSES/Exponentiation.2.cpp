// Problem: Exponentiation
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1095/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	int n;
	cin >> n;
	while (n--) {
		ll a, b;
		cin >> a >> b;
		ll ans = 1;
		while (b != 0) {
			if ((b & 1) == 1) {
				ans *= a;
				ans %= MOD;
			}
			a *= a;
			a %= MOD;
			b >>= 1;
		}
		cout << ans << '\n';
	}
	return 0;
}