// Problem: 10608 - Friends
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1549
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

const int MAXN = 30005;
const int NO_PARENT = -1;

struct disjoint_set {
	int rk[MAXN], parent[MAXN];
	int ans;
	
	void init(int n) {
		for (int i = 0; i <= n; i++) {
			rk[i] = 1;
			parent[i] = NO_PARENT;
		}
		return;
	}
	
	int find_root(int n) {
		if (parent[n] == NO_PARENT) {
			return n;
		}
		return parent[n] = find_root(parent[n]);
	}
	
	void merge(int a, int b) {
		a = find_root(a);
		b = find_root(b);
		if (a == b) {
			return;
		}
		if (rk[a] > rk[b]) {
			swap(a, b);
		}
		parent[a] = b;
		rk[b] += rk[a];
		ans = max(ans, rk[b]);
		return;
	}
};

disjoint_set dsu;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int N, M;
		cin >> N >> M;
		dsu.init(N);
		dsu.ans = 1;
		while (M--) {
			int A, B;
			cin >> A >> B;
			dsu.merge(A, B);
		}
		cout << dsu.ans << '\n';
	}
	return 0;
}