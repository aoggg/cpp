//TIOJ 1420

#include <iostream>
using namespace std;

const int MAXN = 50005;
const int NO_PARENT = -1;
const int MX[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1}; 
const int MY[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

struct Dsu {
	int parent[MAXN], rk[MAXN];
	
	void init(int n) {
		for (int i = 1; i <= n; i++) {
			parent[i] = NO_PARENT;
			rk[i] = 1;
		}
	}
	
	int find_root(int a) {
		// cout << a << '\n';
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
		if (rk[a] > rk[b]) {
			swap(a, b);
		}
		parent[a] = b;
		if (rk[a] == rk[b]) {
			rk[b]++;
		}
		return;
	}
};

Dsu mine;
int boom[10005][10005];

void check(int x, int y, int id) {
	if (x == 0 || y == 0) {
		return;
	}
	if (boom[x][y]) {
		mine.merge(boom[x][y], id);
		return;
	}
	boom[x][y] = id;
	return;
}

int main() {
	int a, b;
	cin >> a >> b;
	int c;
	cin >> c;
	mine.init(c);
	for (int i = 1; i <= c; i++) {
		int x, y;
		cin >> x >> y;
		for (int j = 0; j < 9; j++) {
			int nx = x + MX[j];
			int ny = y + MY[j];
			check(nx, ny, i);
		}
	}
	//output
	int ans = 0;
	for (int i = 1; i <= c; i++) {
		if (mine.parent[i] == NO_PARENT) {
			ans++;
		}
	}
	cout << ans << '\n';
	
	return 0;
}