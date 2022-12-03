// TOJ 652

#include <iostream>
using namespace std;

const int MAXN = 2e5;

int x[MAXN], h[MAXN];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", x + i);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", h + i);
	}
	int left = x[0] + h[0];
	int ans = 1;
	for (int i = 1; i < N; i++) {
		if (x[i] <= left) {
			ans++;
			left = max(left, x[i] + h[i]);
		}
		else {
			break;
		}
	}
	printf("%d\n", ans);
	return 0;
}