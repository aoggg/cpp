// Problem: B. Beautiful Array
// Contest: Codeforces - Codeforces Round #816 (Div. 2)
// URL: https://codeforces.com/contest/1715/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

long long arr[100005];

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, k, b, s;
		cin >> n >> k >> b >> s;
		bool possible = true;
		// cout << "====\n";
		// cout << k * b << ' ' << s << '\n';
		// cout << "====\n";
		if (k * b <= s) {
			arr[0] = min(s, k * b + (k - 1));
			s -= arr[0];
			for (int i = 1; i < n; i++) {
				if (s >= 0) {
					arr[i] = min(k - 1, s);
					s -= arr[i];
				}
			}
		}
		else {
			possible = false;
			// cout << "hi\n";
		}
		if (s != 0 || !possible) {
			cout << -1 << '\n';
		}
		else {
			for (int i = 0; i < n; i++) {
				if (i != 0) {
					cout << ' ';
				}
				cout << arr[i];
			}
			cout << '\n';
		}
	}
	return 0;
}