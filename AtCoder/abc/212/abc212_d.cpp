// Problem: D - Querying Multiset
// Contest: AtCoder - AtCoder Beginner Contest 212
// URL: https://atcoder.jp/contests/abc212/tasks/abc212_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <queue>
using namespace std;
using ll = long long;

priority_queue<ll, vector<ll>, greater<ll>> bag;

int main() {
	int Q;
	scanf("%d", &Q);
	ll add = 0;
	while(Q--) {
		int type;
		scanf("%d", &type);
		if (type == 1) {
			ll X;
			scanf("%lld", &X);
			X -= add;
			bag.push(X);
		}
		else if (type == 2) {
			ll X;
			scanf("%lld", &X);
			add += X;
		}
		else {
			printf("%lld\n", bag.top() + add);
			bag.pop();
		}
	}
	return 0;
}