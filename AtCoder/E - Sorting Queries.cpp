// Problem: E - Sorting Queries
// Contest: AtCoder - AtCoder Beginner Contest 217
// URL: https://atcoder.jp/contests/abc217/tasks/abc217_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> A;
queue<int> num;

int main() {
	int Q;
	scanf("%d", &Q);
	int front = -1;
	while (Q--) {
		int q;
		scanf("%d", &q);
		if (q == 1) {
			int x;
			scanf("%d", &x);
			num.push(x);
		}
		else if (q == 2) {
			int ans;
			if (A.size() == 0) {
				ans = num.front();
				num.pop();
			}
			else {
				ans = A.top();
				A.pop();
			}
			printf("%d\n", ans);
		}
		else {
			while (num.size() != 0) {
				A.push(num.front());
				num.pop();
			}
		}
	}
	return 0;
}