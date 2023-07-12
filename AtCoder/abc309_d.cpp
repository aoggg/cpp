// Problem: D - Add One Edge
// Contest: AtCoder - Denso Create Programming Contest 2023 (AtCoder Beginner Contest 309)
// URL: https://atcoder.jp/contests/abc309/tasks/abc309_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 3e5 + 5;

vector<int> u[MAXN];
int steps[MAXN], max1 = 0, maxn = 0;
bool passed[MAXN];

void BFS(int n) {
	queue<int> route;
	route.push(n);
	passed[n] = true;
	steps[n] = 0;
	while (route.size() != 0) {
		int x = route.front();
		int s = steps[x];
		route.pop();
		for (int i = 0; i < u[x].size(); i++) {
			int nx = u[x][i];
			if (!passed[nx]) {
				steps[nx] = s + 1;
				passed[nx] = true;
				route.push(nx);
				if (n == 1) max1 = max(s + 1, max1);
				else maxn = max(s + 1, maxn);
			}
		}
	}
}

int main() {
	int N1, N2, M;
	scanf("%d%d%d", &N1, &N2, &M);
	while (M--) {
		int a, b;
		scanf("%d%d", &a, &b);
		u[a].push_back(b);
		u[b].push_back(a);
	}
	BFS(1);
	BFS(N1 + N2);
	printf("%d\n", max1 + maxn + 1);
	return 0;
}