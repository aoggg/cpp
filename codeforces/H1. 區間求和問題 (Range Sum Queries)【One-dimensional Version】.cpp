// Problem: H1. 區間求和問題 (Range Sum Queries)【One-dimensional Version】
// Contest: Codeforces - Ten Point Round #23 (Div. 3)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/383582/problem/H1
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#define ll long long
using namespace std;

ll a[200005], sum[200005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	int Q;
	cin >> Q;
	while (Q--) {
		int l, r;
		cin >> l >> r;
		cout << sum[r] - sum[l - 1] << '\n';
	}
	return 0;
}