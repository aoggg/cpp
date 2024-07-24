//ZJ c471

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
using pii = pair<int, int>;
using ll = long long;

const int MAXN = 1e5 + 5;

pii thing[MAXN];

bool cmp(pii a, pii b) {
	if (a.first * b.second < b.first * a.second) return true;
	if (a.first * b.second == b.first * a.second && a.first < b.first) return true;
	return false;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &thing[i].first);
	for (int i = 0; i < N; i++) scanf("%d", &thing[i].second);
	sort(thing, thing + N, cmp);
	// for (int i = 0; i < N; i++) {
		// printf("%d %d\n", thing[i].first, thing[i].second);
	// }
	ll wt = 0, ans = 0;
	for (int i = 0; i < N; i++) {
		ans += wt * thing[i].second;
		wt += thing[i].first;
	}
	printf("%lld\n", ans);
	return 0;
}