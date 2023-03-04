// Problem: Dynamic Range Minimum Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1649
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;

int x[MAXN];

struct Segment_tree {
	struct Node {
		Node *lc, *rc;
		int minx;
		void pull() {
			minx = min(lc -> minx, rc -> minx);
		}
	};
	Node *root = nullptr;
	Node *build(int arr[], int l, int r) {
		Node *res = new Node();
		if (l == r) {
			res -> lc = res -> rc = nullptr;
			res -> minx = arr[l];
		}
		else {
			int m = (l + r) / 2;
			res -> lc = build(arr, l, m);
			res -> rc = build(arr, m + 1, r);
			res -> pull();
		}
		return res;
	}
	void modify(Node *nd, int val, int p, int l, int r) {
		if (l == r) {
			nd -> minx = val;
			return;
		}
		int m = (l + r) / 2;
		if (p <= m) {
			modify(nd -> lc, val, p, l, m);
		}
		else {
			modify(nd -> rc, val, p, m + 1, r);
		}
		nd -> pull();
	}
	int query(Node *nd, int ql, int qr, int l, int r) {
		if (r < ql || l > qr) {
			return 1e9;
		}
		if (ql <= l && r <= qr) {
			return nd -> minx;
		}
		int m = (l + r) / 2;
		return min(query(nd -> lc, ql, qr, l, m), query(nd -> rc, ql, qr, m + 1, r));
	}
} num;

int main() {
	int n, q;
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; i++) {
		scanf("%d", x + i);
	}
	num.root = num.build(x, 1, n);
	while (q--) {
		int op, a, b;
		scanf("%d%d%d", &op, &a, &b);
		switch (op) {
			case 1:
				num.modify(num.root, b, a, 1, n);
				break;
			case 2:
				printf("%d\n", num.query(num.root, a, b, 1, n));
				break;
		}
	}
	return 0;
}