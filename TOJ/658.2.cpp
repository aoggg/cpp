// TOJ 658 - merge sort

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;

int a[MAXN], arr[MAXN];

void merge(int l, int r) {
	int m = (l + r) / 2;
	int lp = l, rp = m + 1;
	for (int i = l; i <= r; i++) {
		if (rp > r || (lp <= m && a[lp] <= a[rp])) {
			arr[i] = a[lp];
			lp++;
		}
		else {
			arr[i] = a[rp];
			rp++;
		}
	}
	for (int i= l; i <= r; i++) {
		a[i] = arr[i];
	}
	return;
}

void msort(int l, int r) {
	if (l >= r) {
		return;
	}
	int m = (l + r) / 2;
	msort(l, m);
	msort(m + 1, r);
	merge(l, r);
	return;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", a + i);
	}
	msort(0, N - 1);
	for (int i = 0; i < N; i++) {
		if (i != 0) {
			printf(" ");
		}
		printf("%d", a[i]);
	}
	puts("");
	return 0;
}