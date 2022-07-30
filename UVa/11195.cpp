// Problem: 11195 - Another n-Queen Problem
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2136
// Memory Limit: 32 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int n, board[15], queen[15], ans;
bool appeared[15]; // the columnn already has queeeeen

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
			queen[num] = 1 << i;
			bool possible = true;
			for (int j = 1; j <= num; j++) {
				if ((queen[num] >> j) == queen[num - j] || (queen[num] << j) == queen[num - j]) {
					possible = false;
					break;
				}
			}
			if (possible) {
				appeared[i] = true;
				playing(num + 1);
				appeared[i] = false;
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
			queen[i] = 0;
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