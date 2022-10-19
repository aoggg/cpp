#include <iostream>
using namespace std;

int S[20005], sum[20005], arr[20005], origin[20005];
int n, k; //k - target

int counter(int l, int r, int based) {
	int m = (l + r) / 2;
	int res = 0;
	int pointerL, pointerR;
	for (pointerR = m + 1, pointerL = l; pointerR <= r; pointerR++) {
		for (; pointerL <= m && sum[pointerR] - sum[pointerL] > based; pointerL++);
		res += pointerL - l;
	}
	return res;
}

void merge(int l, int r) {
	int m = (l + r) / 2;
	int pointerL = l, pointerR = m + 1;
	for (int i = l; i <= r; i++) {
		if ((pointerL <= m && pointerR <= r && sum[pointerL] <= sum[pointerR]) || pointerR > r) {
			arr[i] = sum[pointerL];
			pointerL++;
		}
		else {
			arr[i] = sum[pointerR];
			pointerR++;
		}
	}
	for (int i = l; i <= r; i++) {
		sum[i] = arr[i];
	}
	return;
}

int msort(int l, int r, int based) {
	if (l >= r) {
		return 0;
	}
	int m = (l + r) / 2;
	int resL = msort(l, m, based);
	int resR = msort(m + 1, r, based);
	int res = counter(l, r, based);
	merge(l, r);
	return res + resL + resR;
}

int main() {
	while (cin >> n >> k) {
		if (n == 0 && k == 0) {
			break;
		}
		k--;
		for (int i = 1; i <= n; i++) {
			cin >> S[i];
		}
		sum[0] = 0;
		origin[0] = sum[0];
		for (int i = 1; i <= n; i++) {
			sum[i] = S[i] + sum[i - 1];
			origin[i] = sum[i];
		}
		int l = -10000 * 20000, r = 10000 * 20000;
		int ans = 0;
		while (l <= r) {
			int m = (l + r) / 2;
			for (int i = 0; i <= n; i++) {
				sum[i] = origin[i];
			}
			int total = msort(0, n, m);
			// for (int i = 0; i < n; i++) {
				// cout << sum[i] << ' ';
			// }
			// cout << '\n';
			// cout << m << ": " << total << '\n';
			if (total <= k) {
				ans = m;
				r = m - 1;
			}
			else {
				l = m + 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}