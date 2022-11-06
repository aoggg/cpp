//TIOJ 1833

#include <iostream>
using namespace std;

const int NO_PARENT = -1;
const int MAXN = 1e5 + 5;

struct Dsu {
	int parent[MAXN];
	
	void init(int n) {
		for (int i = 1; i <= n; i++) {
			parent[i] = NO_PARENT;
		}
	}
	
	int find_root(int a) {
		if (parent[a] == NO_PARENT) {
			return a;
		}
		return parent[a] = find_root(parent[a]);
	}
	
	void merge(int a, int b) {
		a = find_root(a);
		b = find_root(b);
		if (a == b) {
			return;
		}
		parent[a] = b;
		return;
	}
};

Dsu robots;

int main() {
	int N, Q;
	cin >> N >> Q;
	robots.init(N);
	while (Q--) {
		string s;
		cin >> s;
		if (s == "Masuta") {
			int a, b;
			cin >> a >> b;
			robots.merge(b, a);
		}
		else {
			int X;
			cin >> X;
			cout << robots.find_root(X) << '\n';
		}
	}
	return 0;
}