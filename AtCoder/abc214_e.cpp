// Problem: E - Packing Under Range Regulations
// Contest: AtCoder - AtCoder Beginner Contest 214
// URL: https://atcoder.jp/contests/abc214/tasks/abc214_e
// Memory Limit: 1024 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
using pq = priority_queue<int, vector<int>, greater<int>>;
using pii = pair<int, int>;

const int MAXN = 2e5 + 5;

pii range[MAXN];

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int N;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d%d", &range[i].first, &range[i].second);
		}
		sort(range, range + N);
		int now = 0;
		bool possible = true;
		pq ball;
		for (int i = 0; possible && (ball.size() != 0 || now < N); i++) {
			if (range[now].first == i) {
				while (now < N && range[now].first == i) {
					ball.push(range[now].second);
					now++;
				}
			}
			if (ball.size() == 0) {
				i = range[now].first - 1;
			}
			else if (ball.top() >= i){
				ball.pop();
			}
			else {
				possible = false;
				break;
			}
		}
		if (possible) {
			puts("Yes");
		}
		else {
			puts("No");
		}
	}
	return 0;
}