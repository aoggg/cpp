// Problem: E. Interview
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll a[MAXN], sum[MAXN];

bool check(const int &now, const int &next) {
	cout << "? " << next - now + 1;
	for (int i = now; i <= next; i++) {
        cout << ' ' << i;
	}
	cout << endl;
	ll re;
	cin >> re;
	if (re == sum[next] - sum[now - 1]) {
        return true;
	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			sum[i] = sum[i - 1] + a[i];
		}
		int now = 1, steps = n >> 1;
		while (steps) {
			int next = now + steps;
			if (next <= n && check(now, next)) {
                now = next;
			}
			else {
                steps >>= 1;
			}
		}
		if (check(now, now)) {
            now++;
		}
		cout << "! " << now << endl;
	}
	return 0;
}
