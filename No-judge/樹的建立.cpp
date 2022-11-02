#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 10000;
const int NOT_EXIST = -1;

struct node {
	int data;
	vector<int> children;
	int parent;
};

node tree[MAXN];

void print(int now, int depth) {
	cout << "========\n";
	cout << "Node " << now << ' ';
	cout << "(depth: " << depth << "):\n";
	cout << "Parent: " << tree[now].parent << '\n';
	cout << "Children(" << tree[now].children.size() << "):\n";
	cout << "  ";
	for (int i = 0; i < tree[now].children.size(); i++) {
		cout << ' ' << tree[now].children[i];
	}
	cout << '\n';
	return;
}

void travel(int now, int depth) {
	print(now, depth);
	for (int i = 0; i < tree[now].children.size(); i++) {
		travel(tree[now].children[i], depth + 1);
	}
	return;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tree[i].data;
		tree[i].children.clear();
		tree[i].parent = NOT_EXIST;
	}
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].children.push_back(b);
		tree[b].parent = a;
	}
	for (int i = 0; i < n; i++) {
		if (tree[i].parent == NOT_EXIST) {
			travel(i, 0);
			break;
		}
	}
	return 0;
}