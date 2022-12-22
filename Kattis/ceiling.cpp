// Kattis ceiling

#include <iostream>
using namespace std;

const int MAXN = 55;
const int NOT_EXIST = -1;

struct BST {
	struct info {
		int num;
		int left, right;
	};
	
	info node[MAXN];
	int root = NOT_EXIST, total = 1;
	
	void insert(const int &num, int &pos) {
		if (pos == NOT_EXIST) {
			pos = total;
			total++;
			node[pos].num = num;
			node[pos].left = node[pos].right = NOT_EXIST;
			return;
		}
		if (node[pos].num > num) {
			insert(num, node[pos].left);
		}
		else {
			insert(num, node[pos].right);
		}
		return;
	}
	
	void output(const int &pos) {
		if (pos == NOT_EXIST) {
			return;
		}
		output(node[pos].left);
		printf("%d ", node[pos].num);
		output(node[pos].right);
		return;
	}
};

BST tree[MAXN];

bool cmp(const BST &a, const BST &b, const int &posa, const int &posb) {
	if (posa == NOT_EXIST && posb == NOT_EXIST) {
		return true;
	}
	if (posa == NOT_EXIST || posb == NOT_EXIST) {
		return false;
	}
	return cmp(a, b, a.node[posa].left, b.node[posb].left) && cmp(a, b, a.node[posa].right, b.node[posb].right);
}

int main() {
	int n, k;
	int ans = 0;
	scanf("%d%d", &n, &k);
	for (int t = 0; t < n; t++) {
		for (int i = 0; i < k; i++) {
			int num;
			scanf("%d", &num);
			tree[t].insert(num, tree[t].root);
		}
		bool same = false;
		for (int i = 0; i < t; i++) {
			if (cmp(tree[i], tree[t], tree[i].root, tree[t].root)) {
				same = true;
				break;
			}
		}
		if (!same) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}