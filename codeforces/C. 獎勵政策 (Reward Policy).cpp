// Problem: C. 獎勵政策 (Reward Policy)
// Contest: Codeforces - 國立新化高級中學 111 學年度學科能力競賽 資訊科 TEST
// URL: https://codeforces.com/gym/394748/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

const int MAXN = 200001;

pair<long long, int> a[MAXN];
long long sum[MAXN], ans[MAXN];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	long long S = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i;
		S += a[i].first;
	}
	sort(a, a + n);
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		sum[i] = sum[i - 1] + a[i - 1].first;
	}
	for (int i = 0; i < n; i++) {
		int p = a[i].second;
		long long amount = S + (n - 1) * a[i].first; 
		// cout << p + 1 << ": ";
		// cout << amount << ' ';
		long long diff = (a[i].first * (i + 1) - sum[i + 1]) + (sum[n] - sum[i + 1] - a[i].first * (n - i));
		// cout << diff << '\n';
		ans[p] = amount + diff;
	}
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			cout << ' ';
		}
		cout << ans[i];
	}
	cout << '\n';
	return 0;
}