// Problem: Apartments
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1084/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

int a[200000], b[200000];

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int applicant = 0, apartment = 0, ans = 0;
	sort(a, a + n);
	sort(b, b + m);
	while (applicant < n && apartment < m) {
		if (abs(b[apartment] - a[applicant]) <= k) {
			applicant++;
			apartment++;
			ans++;
		}
		else if (b[apartment] > a[applicant]) {
			applicant++;
		}
		else {
			apartment++;
		}
	}
	cout << ans << '\n';
	return 0;
}