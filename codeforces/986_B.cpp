// Problem: B. Petr and Permutations
// Contest: Codeforces - Codeforces Round 485 (Div. 1)
// URL: https://codeforces.com/problemset/problem/986/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Time: 2024-06-25 21:54:41

#include <iostream>
using namespace std;

const int MAXN = 1e6 + 5;

int arr[MAXN], a[MAXN], amount = 0;

void merge(int l, int r) {
	int mid = (l + r) / 2;
	for (int pl = l, pr = mid + 1, i = l; i <= r; i++) {
		if (pl > mid) a[i] = arr[pr++];
		else if (pr > r) a[i] = arr[pl++];
		else if (arr[pl] < arr[pr]) a[i] = arr[pl++];
		else {
			amount += mid - pl + 1;
			a[i] = arr[pr++];
		}
	}
	for (int i = l; i <= r; i++) arr[i] = a[i];
}


void msort(int l, int r) {
	if (l >= r) return;
	int mid = (l + r) / 2;
	msort(l, mid);
	msort(mid + 1, r);
	merge(l, r); 
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", arr + i);
	msort(0, n - 1);
	int Petr = 3 * n;
	fprintf(stderr, "amount: %d\nPetr: %d\n", amount, Petr);
	if ((Petr - amount) % 2 == 0) puts("Petr");
	else puts("Um_nik");
	return 0;
}