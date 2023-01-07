// Problem: C - Friends and Travel costs
// Contest: AtCoder - AtCoder Beginner Contest 203（Sponsored by Panasonic）
// URL: https://atcoder.jp/contests/abc203/tasks/abc203_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

pair<ll, ll> friends[MAXN];

int main() {
	int N, K;
	scanf("%d%d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%lld%lld", &friends[i].first, &friends[i].second);
	}
	sort(friends, friends + N);
	long long now = K;
	for (int i = 0; i <= N && friends[i].first <= now; i++) {
		now += friends[i].second;
	}
	printf("%lld", now);
	return 0;
}