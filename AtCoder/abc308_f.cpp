// Problem: F - Vouchers
// Contest: AtCoder - AtCoder Beginner Contest 308
// URL: https://atcoder.jp/contests/abc308/tasks/abc308_f
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
using pq = priority_queue<ll>;

const int MAXN = 2e5 + 5;

ll P[MAXN];
pll coupon[MAXN];
pq discount;

int main() {
	int N, M;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) scanf("%lld", P + i);
	for (int i = 0; i < M; i++) scanf("%lld", &coupon[i].first);
	for (int i = 0; i < M; i++) scanf("%lld", &coupon[i].second);
	sort(coupon, coupon + M);
	sort(P, P + N);
	int cp = 0; //cp - coupon pointer
	ll ans = 0;
	for (int pp = 0; pp < N; pp++) { //pp - price pointer
		while (cp < M && P[pp] >= coupon[cp].first) {
			discount.push(coupon[cp].second);
			cp++;
		}
		if (discount.size() != 0) {
			ans += P[pp] - discount.top();
			discount.pop();
		}
		else {
			ans += P[pp];
		}
	}
	printf("%lld\n", ans);
	return 0;
}