// Problem: C. 掃地機器人
// Contest: Codeforces - 台南高中競技程式練盟練習賽-三月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/431691/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b) {
	ll m = a * b;
	while (b != 0) {
    	a %= b;
    	swap(a, b);
	}
	return m / a;
}

int main() {
	ll n, m;
	int Q;
	scanf("%lld%lld%*d%*d%d", &n, &m, &Q);
	ll maxn = lcm(n, m);
	while (Q--) {
		ll t;
		scanf("%lld", &t);
		printf("%lld\n", min(t, maxn));
	}
	return 0;
}