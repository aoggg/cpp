// Problem: Cross Country
// Contest: Kattis
// URL: https://open.kattis.com/problems/crosscountry
// Memory Limit: 1024 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <queue>
#include <utility>
#include <tuple>
using namespace std;
using pii = pair<int, int>;
using pq = priority_queue<pii, vector<pii>, greater<pii>>;

const int MAXN = 1e3 + 5;
const int CANT_ARRIVE = -1;

int D[MAXN][MAXN], dis[MAXN];

int main() {
	int N, S, T;
	scanf("%d%d%d", &N, &S, &T);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &D[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		dis[i] = CANT_ARRIVE;
	}
	dis[S] = 0;
	pq shortest;
	shortest.push({0, S});
	while (shortest.size() != 0) {
		int d, cur;
		tie(d, cur) = shortest.top();
		shortest.pop();
		if (cur == T) {
			break;
		}
		if (d != dis[cur]) {
			continue;
		}
		for (int i = 0; i < N; i++) {
			if (dis[i] == CANT_ARRIVE || dis[i] > d + D[cur][i]) {
				dis[i] = d + D[cur][i];
				shortest.push({dis[i], i});
			}
		}
	}
	printf("%d\n", dis[T]);
	return 0;
}