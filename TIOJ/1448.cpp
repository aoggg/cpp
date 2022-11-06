//TIOJ 1448

#include <iostream>
using namespace std;

const int MAXN = 5e5 + 5;
const int NO_PARENT = -1;

struct Dsu {
	int parent[3 * MAXN], rk[3 * MAXN];
	
	void init(int n) {
		for (int i = 1; i <= n; i++) {
			parent[i] = NO_PARENT;
			rk[i] = 1;
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
		if (rk[a] > rk[b]) {
			swap(rk[a], rk[b]);
		}
		parent[a] = b;
		if (rk[a] == rk[b]) {
			rk[b]++;
		}
		return;
	}
};

Dsu animals;

int main() {
	int N, K;
	cin >> N >> K;
	animals.init(3 * N);
	int lies = 0;
	while (K--) {
		int D, X, Y;
		cin >> D >> X >> Y;
		if (X > N || Y > N) {
			lies++;
			continue;
		}
		int x = animals.find_root(X), y = animals.find_root(Y);
		int xeat = animals.find_root(X + N), yeat = animals.find_root(Y + N);
		int eatx = animals.find_root(X + 2 * N), eaty = animals.find_root(Y + 2 * N);
		if (D == 1) {
			if (xeat == y || eatx == y) {
				lies++;
			}
			else {
				animals.merge(x, y);
				animals.merge(xeat, yeat);
				animals.merge(eatx, eaty);
			}
		}
		else {
			if (x == y || eatx == y) {
				lies++;
			}
			else {
				animals.merge(eaty, x);
				animals.merge(eatx, yeat);
				animals.merge(y, xeat);
			}
		}
	}
	cout << lies << '\n';
	return 0;
}