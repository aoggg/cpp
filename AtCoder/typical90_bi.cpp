// Problem: 061 - Deck（★2）
// Contest: AtCoder - 競プロ典型 90 問
// URL: https://atcoder.jp/contests/typical90/tasks/typical90_bi
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 1e5 + 5;

int front, rear, card[2 * MAXN];

int main() {
	int Q;
	scanf("%d", &Q);
	front = Q - 1;
	rear = Q;
	bool FT = true;
	while (Q--) {
		int t, x;
		scanf("%d%d", &t, &x);
		fprintf(stderr, "%d\n", x);
		if (t == 1) {
			card[front] = x;
			front--;
		}
		else if (t == 2) {
			card[rear] = x;
			rear++;
		}
		else {
			printf("%d\n", card[front + x]);
		}
		FT = false;
	}
	return 0;
}