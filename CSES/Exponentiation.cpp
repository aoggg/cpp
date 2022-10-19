// Problem: Exponentiation
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1095
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

ll fastpow(ll a, ll b) {
	if (b == 0) {
		return 1;
	}
	ll n = fastpow(a, b / 2);
	if (b % 2 == 1) {
		return (n * n) % MOD * a % MOD;
	}
	return n * n % MOD;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		ll a, b;
		cin >> a >> b;
		cout << fastpow(a, b) << '\n';
	}
	return 0;
}