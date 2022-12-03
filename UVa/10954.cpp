// Problem: 10954 - Add All
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1895
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 5005;

struct Heap {
	int node[MAXN];
	int N;
	
	void shift_up(int pos) {
		int parent;
		while (pos > 1) {
			parent = (pos >> 1);
			if (node[pos] >= node[parent]) {
				break;
			}
			swap(node[pos], node[parent]);
			pos = parent;
		}
		return;
	}
	
	void shift_down(int pos) {
		int l, r, next;
		while (pos <= N) {
			l = (pos << 1);
			r = (l | 1);
			if (l > N) {
				break;
			}
			next = l;
			if (r <= N && node[l] > node[r]) {
				next = r;
			}
			if (node[pos] < node[next]) {
				break;
			}
			swap(node[pos], node[next]);
			pos = next;
		}
		return;
	}
	
	void build() {
		for (int i = N; i >= 1; i--) {
			shift_down(i);
		}
		return;
	}
	
	void push(int n) {
		N++;
		node[N] = n;
		shift_up(N);
		return;
	}
	
	int pop() {
		int n = node[1];
		node[1] = node[N];
		N--;
		shift_down(1);
		return n;
	}
};

Heap num;

int main() {
	while (cin >> num.N) {
		if (num.N == 0) {
			break;
		}
		for (int i = 1; i <= num.N; i++) {
			cin >> num.node[i];
		}
		num.build();
		int ans = 0;
		while (num.N > 1) {
			int a = num.pop();
			int b = num.pop();
			ans += a + b;
			num.push(a + b);
		}
		cout << ans << '\n';
	}
	return 0;
}