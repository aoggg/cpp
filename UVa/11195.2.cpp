// Problem: 11195 - Another n-Queen Problem
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2136
// Memory Limit: 32 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int n, board[15], ans;
bool appeared[15], subtract[30], add[30];

void playing(int num) {
	if (num == n) {
		ans++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!appeared[i]) {
			if (((1 << i) & board[num]) != 0) {
				continue;
			}
			int x = num, y = i;
			if (!subtract[x - y + 14] && !add[x + y]) {
				subtract[x - y + 14] = true;
				add[x + y] = true;
				appeared[i] = true;
				playing(num + 1);
				appeared[i] = false;
				add[x + y] = false;
				subtract[x - y + 14] = false;
			}
		}
	}
}

int main() {
	for (int cases = 1; cin >> n; cases++) {
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) { //put obstacle
			appeared[i] = 0;
			board[i] = 0;
			for (int j = 0; j < n; j++) {
				char c;
				cin >> c;
				if (c == '*') {
					board[i] |= (1 << j);
				}
			}
		}
		ans = 0;
		playing(0);
		cout << "Case " << cases << ": " << ans << '\n';
	}
	return 0;
}