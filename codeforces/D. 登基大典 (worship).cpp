#include <iostream>
#include <algorithm>
using namespace std;

long long a[500000], far[500000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			a[i] = -a[i];
		}
	}
	long long ans = 0;
	sort(a, a + n);
	for (int i = 1; i < n; i++) {
		far[i] = a[i] - a[i - 1];
	}
	for (int i = 1; i < n; i++) {
		ans += far[i] * i * (n - i);
	}
	cout << ans << '\n';
	return 0;
}