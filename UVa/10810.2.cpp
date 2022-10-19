// Problem: 10810 - Ultra-QuickSort
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1751
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int a[500005];
long long ans = 0;

void merge(int l, int r) {
	int arr[500005];
	int m = (l + r) / 2;
	int pL = l, pR = m + 1;
	for (int i = l; pL <= m || pR <= r; i++) {
		if (pR > r || (pL <= m && a[pL] <= a[pR])) {
			arr[i] = a[pL];
			ans += pR - m - 1;
			pL++;
		}
		else {
			arr[i] = a[pR];
			pR++;
		}
	}
	for (int i = l, j = 0; i <= r; i++) {
		a[i] = arr[i];
	}
	return;
}

void MergeSort(int l, int r) {
	if (l >= r) {
		return;
	}
	int m = (l + r) / 2;
	MergeSort(l, m);
	MergeSort(m + 1, r);
	merge(l, r);
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		ans = 0;
		MergeSort(0, n - 1);
		cout << ans << '\n';
	}
	return 0;
}