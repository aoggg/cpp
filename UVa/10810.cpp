#include <iostream>
using namespace std;

long long ans = 0, arr[500000], a[500000];

void merge(int begin, int end) {
	int mid = (begin + end) / 2;
	int i = begin, j = mid + 1;
	for (int k = begin; k <= end; k++) {
		if ((i <= mid && arr[i] <= arr[j]) || (j == end + 1)) {
			a[k] = arr[i];
			i++;
		}
		else {
			ans += mid - i + 1;
			a[k] = arr[j];
			j++;
		}
	} 
	for (int k = begin; k <= end; k++) {
		arr[k] = a[k];
	}
}

void msort(int begin, int end) {
	if (begin >= end) {
		return;
	}
	int mid = (begin + end) / 2;
	msort(begin, mid);
	msort(mid + 1, end);
	merge(begin, end);
}

int main() {
	int n;
	while (cin >> n) {
		ans = 0;
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		msort(0, n - 1);
		cout << ans << '\n';
	}
	return 0;
}