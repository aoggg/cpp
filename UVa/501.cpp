// Problem: 501 - Black Box
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=442
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <queue>
using namespace std;

const int MAXN = 3e4 + 5;

int A[MAXN], u[MAXN];
priority_queue<int> smaller;
priority_queue<int, vector<int>, greater<int>> bigger;

void init() {
	while (smaller.size()) {
		smaller.pop();
	}
	while (bigger.size()) {
		bigger.pop();
	}
	return;
}

int main() {
	int K;
	bool FT = true;
	scanf("%d", &K);
	while (K--) {
		init();
		if (!FT) {
			puts("");
		}
		FT = false;
		int M, N;
		scanf("%d%d", &M, &N);
		for (int i = 0; i < M; i++) {
			scanf("%d", A + i);
		}
		for (int i = 0; i < N; i++) {
			scanf("%d", u + i);
		}
		for (int i = 0, now = 0, ni = 1; i < M && now < N; i++) {
			int num = A[i];
			if (smaller.size() == 0 || num < smaller.top()) {
				smaller.push(num);
			}
			else {
				bigger.push(num);
			}
			while (i + 1 == u[now]) {
				while (smaller.size() > ni) {
					bigger.push(smaller.top());
					smaller.pop();
				}
				while (smaller.size() < ni) {
					smaller.push(bigger.top());
					bigger.pop();
				}
				printf("%d\n", smaller.top());
				now++;
				ni++;
			}
		}
	}
	return 0;
}