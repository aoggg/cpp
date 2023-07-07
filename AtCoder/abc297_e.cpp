// Problem: E - Kth Takoyaki Set
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_e
// Memory Limit: 1024 MB
// Time Limit: 3000 ms

#include <iostream>
#include <queue>
#include <map>
using namespace std;
using ll = long long;
using pq = priority_queue<ll, vector<ll>, greater<ll>>;

const int MAXN = 15;

pq cost;
ll A[MAXN];
map<ll, bool> appeared;

int main() {
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		if (!appeared[A[i]]) {
			cost.push(A[i]);
			appeared[A[i]] = true;
		}
	}
	ll ans = 0;
	while (K--) {
		ans = cost.top();
		cost.pop();
		for (int i = 0; i < N; i++) {
			if (!appeared[ans + A[i]]) {
				cost.push(ans + A[i]);
				appeared[ans + A[i]] = true;
			}		
		}
	}
	cout << ans << '\n';
	return 0;
}