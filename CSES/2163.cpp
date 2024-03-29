// Problem: Josephus Problem II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2163/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 4 * (2e5 + 5);
const int NOT_EXIST = -1;

struct BST {
	struct info {
		int id;
		int right = NOT_EXIST, left = NOT_EXIST;
	};
	
	int children[MAXN];
	int root = NOT_EXIST;
	
	void init(const int &l, const int &r, int &pos) {
		if (l > r) {
			return;
		}
		int id = (l + r) / 2;
		pos = id;
		children[pos].id = id;
		init(l, id - 1, children[pos].left);
		init(id + 1, r, children[pos].right);
	}
	
	int found(int pos) {
		
	}
	
	void kill(int pos) {
		
	}
};

BST circle;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	circle.init(1, n, circle.root);
	
	return 0;
}