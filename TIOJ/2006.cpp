// TIOJ 2006
// 2024-07-28

#include <iostream>
using namespace std;

const int MAXN = 405;

int N, M;
int icard[MAXN], card[MAXN]; // icard = initial card status

void init(int l) {
	for (int i = 1; i <= N; i++) card[i] = icard[i];
	card[l]++;
	return;
}

bool check(int n) {
	if (n + 1 > N || n + 2 > N) return false;
	for (int i = 0; i < 3; i++) {
		if (card[n + i] < 1) return false;
	}
	return true;
}

bool listen(int l) {
	for (int i = 1; i <= N; i++) {
		init(l);
		if (card[i] >= 2) {
			bool ok = true;
			card[i] -= 2;
			for (int j = 1; j <= N; j++) {
				while (card[j] >= 3) card[j] -= 3;
				while (check(j)) {
					for (int k = 0; k < 3; k++) card[k + j]--;
				}
				if (card[j] > 0) {
					ok = false;
					break;
				}
			}
			if (ok) return true;
		}
	}
	return false;
}

int main() {
	scanf("%d%d", &N, &M);
	int total = 3 * M + 1;
	for (int i = 0; i < total; i++) {
		int num;
		scanf("%d", &num);
		icard[num]++;
	}
	bool ft = true;
	for (int i = 1; i <= N; i++) {
		if (listen(i)) {
			if (ft) ft = false;
			else printf(" ");
			printf("%d", i);
		}
	}
	if (ft) printf("NO");
	puts("");
	return 0;
}