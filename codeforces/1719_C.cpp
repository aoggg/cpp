// Problem: C. Fighting Tournament
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/contest/1719/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <utility>
using namespace std;

int a[100000];
pair<int, int> win[100000]; //first - startwin, second - totalwin;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			win[i] = {-1, 0};
		}
		win[0].first = 0;
		int frontmax = a[0], frontwin = 0;
		for (int i = 1; frontmax < n; i++) {
			if (frontmax < a[i]) {
				frontmax = a[i];
				frontwin = i;
				win[i].first = i - 1;
			}
			win[frontwin].second++;
		}
		while (q--) {
			int i, k;
			cin >> i >> k;
			if (a[i - 1] < n) {
				cout << min(max(k - win[i - 1].first, 0), win[i - 1].second) << '\n';
			}
			else {
				cout << max(k - win[i - 1].first, 0) << '\n';
			}
		}
	}
	return 0;
}