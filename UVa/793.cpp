// Problem: 793 - Network Connections
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=734
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

const int MAXN = 1005;
const int NO_PARENT = -1;

int parent[MAXN], rk[MAXN];
int N;

void init() {
	for (int i = 0; i < MAXN; i++) {
		parent[i] = NO_PARENT;
		rk[i] = 1;
	}
	return;
}

int find_root(int a) {
	if (parent[a] == NO_PARENT) {
		return a;
	}
	return parent[a] = find_root(parent[a]);
}

void connected(int a, int b) {
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

bool query(int a, int b) {
	if (find_root(a) == find_root(b)) {
		return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	cin >> N;
	for (int cases = 0; cases < t; cases++) {
		if (cases != 0) {
			cout << '\n';
		}
		init();
		int unans = 0, ans = 0;
		string s;
		while (cin >> s) {
			if (s.size() == 0 || s[0] != 'c' && s[0] != 'q') {
				break;
			}
			int a, b;
			char c = s[0];
			cin >> a >> b;
			if (c == 'c') {
				connected(a, b);
			}
			if (c == 'q') {
				if (query(a, b)) {
					ans++;
				}
				else {
					unans++;
				}
			}
		}
		cout << ans << ',' << unans << '\n';
		N = 0;
		for (int i =  	0; i < s.size(); i++) {
			N = N * 10 + s[i] - '0';
		}
	}
	return 0;
}