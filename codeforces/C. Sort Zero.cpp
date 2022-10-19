// Problem: C. Sort Zero
// Contest: Codeforces - Codeforces Round #813 (Div. 2)
// URL: https://codeforces.com/contest/1712/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include <iostream>
using namespace std;

const int MAXN = 100001;

int a[MAXN];
bool appeared[MAXN];
int counter, n;

void turnToFalse() {
	for (int i = 1; i <= n; i++) {
		appeared[i] = false;
	}
}

bool check(int m) {
	counter = 0;
	for (int i = 0; i < m; i++) {
		if (!appeared[a[i]]) {
			counter++;
		}
		appeared[a[i]] = true;
	}
	int front = 0, now = 0;
	for (int i = m; i < n; i++) {
		now = a[i];
		if (appeared[now]) {
			now = 0;
		}
		if (now < front) {
			return false;
		}
		front = now;
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int times = 20, l = 0, r = n, ans = 0;
		while (times-- && l < r) {
			turnToFalse();
			int m = (l + r) / 2;
			if (check(m)) {
				ans = counter;
				r = m;
				// cout << '*' << m << '\n';
				// cout << "hi" << ' ';
				// cout << count << '\n';
			}
			else {
				l = m + 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}