// Problem: C - Medicine
// Contest: AtCoder - Denso Create Programming Contest 2023 (AtCoder Beginner Contest 309)
// URL: https://atcoder.jp/contests/abc309/tasks/abc309_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const int MAXN = 3e5 + 5;

pll medicine[MAXN];

int main() {
	ll N, K, total = 0;
	scanf("%lld%lld", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%lld%lld", &medicine[i].first, &medicine[i].second);
		total += medicine[i].second;
	}
	sort(medicine, medicine + N);
	int p = 0, day = 1;
	for (day = 1; p < N; day++) {
		while (p < N && day > medicine[p].first) {
			total -= medicine[p].second;
			p++;
		}
		if (total <= K) break;
	}
	printf("%d\n", day);
	return 0;
}