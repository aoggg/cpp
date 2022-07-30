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

void playing(int num, int appeared, int subtract, int add) {
	if (num == n) {
		ans++;
		return;
	}
	int available = ~(appeared | subtract | add | board[num]);
	int mask = (1 << n) - 1;
	available &= mask;
	while (available) {
		int lowbit = available & (-available);
		playing(num + 1, appeared | lowbit, (subtract | lowbit) >> 1, (add | lowbit) << 1);
		available ^= lowbit;
	}
}

int main() {
	for (int cases = 1; cin >> n; cases++) {
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) { //put obstacle
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
		playing(0, 0, 0, 0);
		cout << "Case " << cases << ": " << ans << '\n';
	}
	return 0;
}