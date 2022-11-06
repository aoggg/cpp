// Problem: 115 - Climbing Trees
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=51
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 305;
const int NO_PARENT = -1;

vector<string> name;

struct Tree {

	struct Info {
		string people;
		int parent;
		vector<int> children;
		int depth;
	};
	
	Info node[MAXN];
	int parent[MAXN][9];
	
	void init() {
		for (int i = 0; i < MAXN; i++) {
			node[i].people = "";
			node[i].parent = NO_PARENT;
			node[i].children.clear();
			node[i].depth = 0;
		}
	}
	
};

Tree family;

int find_id(string s) {
	for (int i = 0; i < name.size(); i++) {
		if (family.node[i].people == s) {
			return i;
		}
	}
	name.push_back(s);
	return name.size() - 1;
}


void travel(int node, int depth) {
	family.node[node].depth = depth;
	for (int i = 0; i < family.node[node].children.size(); i++) {
		travel(family.node[node].children[i], depth + 1);
	}
	return;
}

int find_lca(int p, int q) {
	if (family.node[q].depth < family.node[p].depth) {
		swap(p, q);
	}
	if (family.node[p].depth < family.node[q].depth) {
		int dif = family.node[q].depth - family.node[p].depth;
		for (int i = 0; i < 9; i++) {
			if ((dif & 1) == 1) {
				q = family.parent[q][i];
			}
			dif >>= 1;
		}
	}
	if (p == q) {
		return p;
	}
	for (int i = 8; i >= 0; i--) {
		if (family.parent[p][i] != family.parent[q][i] && (family.parent[p][i] != NO_PARENT && family.parent[q][i] != NO_PARENT)) {
			p = family.parent[p][i];
			q = family.parent[q][i];
		}
	}
	return family.parent[p][0];
}


void output_parent(int child, int parent, string s) {
	int great = family.node[child].depth - family.node[parent].depth;
	for (int i = great - 1; i > 0; i--) {
		if (i == 1) {
			cout << "grand ";
		}
		else {
			cout << "great ";
		}
	}
	cout << s << '\n';
	return;
}

int find_root(int a) {
	if (family.node[a].parent == NO_PARENT) {
		return a;
	}
	return find_root(family.node[a].parent);
}

int main() {
	string p, q;
	family.init();
	while (cin >> p >> q) {
		if (p == "no.child" && q == "no.parent") {
			break;
		}
		int idp = find_id(p);
		int idq = find_id(q);
		family.node[idp].people = p;
		family.node[idp].parent = idq;
		family.node[idq].people = q;
		family.node[idq].children.push_back(idp);
	}
	for (int i = 0; i < name.size(); i++) {
		if (family.node[i].parent == NO_PARENT) {
			travel(i, 0);
		}
	}
	for (int i = 0; i < name.size(); i++) {
		family.parent[i][0] = family.node[i].parent;
	}
	for (int i = 1; i < 9; i++) {
		for (int j = 0; j < name.size(); j++) {
			family.parent[j][i] = family.parent[family.parent[j][i - 1]][i - 1];
		}
	}
	//query
	while (cin >> p >> q) {
		int idp = find_id(p);
		int idq = find_id(q);
		int lca = find_lca(idp, idq);
		int rp = find_root(idp);
		int rq = find_root(idq);
		if (rp != rq) {
			cout << "no relation\n";
		}
		else if (lca == idq){
			output_parent(idp, idq, "child");
		}
		else if (lca == idp) {
			output_parent(idq, idp, "parent");
		}
		else {
			int m = family.node[idp].depth - family.node[lca].depth - 1;
			int n = family.node[idq].depth - family.node[lca].depth - 1;
			int k = min(m, n);
			int j = abs(m - n);
			if (k == 0 && j == 0) {
				cout << "sibling\n";
			}
			else {
				cout << k << " cousin";
				if (j != 0) {
					cout << " removed " << j;
				}
				cout << '\n';
			}
		}
	}
	return 0;
}