//TOJ 89

#include <iostream>
using namespace std;

const int MAXN = 1000005;
const int NO_PARENT = -1;

struct Dsu {
	int parent[MAXN], rk[MAXN];
	
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
			swap(a, b);
		}
		parent[a] = b;
		if (rk[a] == rk[b]) {
			rk[b]++;
		}
		return;
	}
};

Dsu relation;
int main() {
	int N;
	cin >> N;
	relation.init(2 * N);
	string s1, s2, s3, s4;
	int a, b;
	while (cin >> s1 >> s2 >> s3 >> a >> b) {
		int ra = relation.find_root(a), rb = relation.find_root(b);
		int ran = relation.find_root(a + N), rbn = relation.find_root(b + N);
		if (s1 == "you" && s3 == "friends") {
			if (ran == rb || rbn == ra) {
				cout << "angry\n";
			}
			else {
				relation.merge(a, b);
				relation.merge(a + N, b + N);
			}
		}
		else if (s1 == "you" && s3 == "enemies") {
			if (ra == rb) {
				cout << "angry\n";
			}
			else {
				relation.merge(a + N, b);
				relation.merge(b + N, a);
			}
		}
		else if (s1 == "are" && s3 == "friends") {
			if (ra == rb) {
				cout << "yeap\n";
			}
			else {
				cout << "nope\n";
			}
		}
		else {
			if (ran == rb) {
				cout << "yeap\n";
			}
			else {
				cout << "nope\n";
			}
		}
	}
	return 0;
}