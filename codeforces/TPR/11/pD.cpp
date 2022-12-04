#include <iostream>
#include <algorithm>
using namespace std;

long long a[1000], b[1000];

int main() {
	int Q;
	cin >> Q;
	while (Q--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n);
		long long biggest = 0, smallest = 0;
		for (int i = 0; i < n; i++) {
			biggest += a[i] * b[i];
			smallest += a[i] * b[n - 1 - i];
		}
		cout << biggest << ' ' << smallest << '\n';
	}
	return 0;
}