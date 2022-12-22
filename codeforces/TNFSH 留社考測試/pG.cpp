// Problem: G. 懶惰(lazy)
// Contest: Codeforces - 留社考測試
// URL: https://codeforces.com/group/yifSBS4PJN/contest/417296/problem/G
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 55;

string S[MAXN];

int main() {
	int n, m;
	cin >> n >> m;
	getline(cin, S[0]);
	for (int i = 0; i < n; i++) {
		getline(cin, S[i]);
	}
	while (m--) {
		int a;
		cin >> a;
		a--;
		cout << S[a];
	}
	cout << '\n';
	return 0;
}