// TIOJ 1410
// 2024-06-30

#include <iostream>
#include <utility>
#include <queue>
using namespace std;
using pii = pair<int, int>;
using pq = priority_queue<pii, vector<pii>, greater<pii> >;

const int MAXN = 1e6 + 5;

pq moment;

void init() {
	while (moment.size() != 0) moment.pop();
	return;
}

int cal() {
	int re = -1e9;
	int people = 0;
	while (moment.size() != 0) {
		int t = moment.top().first;
		while (moment.size() != 0 && moment.top().first == t) {
			people += moment.top().second;
			moment.pop();
		}
		re = max(re, people);
	}
	return re;
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		init();
		for (int i = 0; i < n; i++) {
			int s, f;
			scanf("%d%d", &s, &f);
			moment.push(make_pair(s, 1));
			moment.push(make_pair(f + 1, -1));
		}
		printf("%d\n", cal());
	}
	return 0;
}