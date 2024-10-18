// Problem: E - Art Gallery on Graph
// Contest: AtCoder - KYOCERA Programming Contest 2023（AtCoder Beginner Contest 305）
// URL: https://atcoder.jp/contests/abc305/tasks/abc305_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAXN = 2e5 + 5;

struct info {
	int from;
	int steps;
	int now;
	bool operator< (const info &rhs) const {
		return steps < rhs.steps;
	}
};

vector<int> path[MAXN];
int ans = 0;
bool guard[MAXN];
priority_queue<info> route;
int N;

bool check(int now, int steps) {
	if (guard[now]) return false;
	if (steps - 1 < 0) return false;
	return true;
}

void BFS() {
	while (route.size() != 0) {
		int from = route.top().from;
		int step = route.top().steps;
		int now = route.top().now;
		guard[now] = true;
		route.pop();
		info next;
		for (int i = 0; i < path[now].size(); i++) { 
			if (check(path[now][i], step)) {
				guard[path[now][i]] = true;
				next.from = from;
				next.steps = step - 1;
				next.now = path[now][i];
				route.push(next);
			}
		}
	}
}

int main() {
	int M, K;
	scanf("%d%d%d", &N, &M, &K);
	for (int i = 0; i < M; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		path[a].push_back(b);
		path[b].push_back(a);
	}
	for (int i = 0; i < K; i++) {
		int p, h;
		scanf("%d%d", &p, &h);
		info st;
		st.from = p;
		st.steps = h;
		st.now = p;
		route.push(st);
	}
	BFS();
  	for (int i = 1; i <= N; i++) {
      	if (guard[i]) ans++;
    }
	printf("%d\n", ans);
	bool FT = true;
	for (int i = 1; i <= N; i++) {
		if (guard[i]) {
			if (!FT) printf(" ");
			printf("%d", i);
			FT = false;
		}
	}
	puts("");
	return 0;
}