// Problem: 10583 - Ubiquitous Religions
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1524
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

const int MAXN = 50005;
const int NO_PARENT = -1;

struct disjoint_set {
	int rk[MAXN], parent[MAXN];
	void init(int n) {
		for (int i = 1; i <= n; i++) {
			parent[i] = NO_PARENT;
			rk[i] = 1;
		}
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
		if (rk[a] == rk[b]) {
			rk[b]++;
		}
	}
};

disjoint_set dsu;

int main() {
	int n, m;
	for (int cases = 1; cin >> n >> m; cases++) {
		if (n == 0 && m == 0) {
			break;
		}
		cout << "Case " << cases << ": ";
		dsu.init(n);
		for (int i = 0; i < m; i++) {
			int si, sj;
			cin >> si >> sj;
			dsu.merge(si, sj);
		}
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (dsu.parent[i] == NO_PARENT) {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}