// Problem: B. Triple
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int a[200001];

int main() {
	int t;
	cin >> t;
	for (int cases = 0; cases < t; cases++) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int m;
			cin >> m;
			a[m]++;
		}
		int ans = -1;
		for (int i = 1; i <= n; i++) {
			if (a[i] >= 3) {
				ans = i;
				break;
			}
		}
		for (int i = 0; i <= n; i++) {
			a[i] = 0;
		}
		cout << ans << '\n';
	}
	return 0;
}