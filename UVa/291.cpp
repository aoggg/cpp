// Problem: 291 - The House Of Santa Claus
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=227
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

bool can_walk[6][6], walked[6][6];
int passed[8];

void figure(void) {
	can_walk[1][2] = true;
	can_walk[1][3] = true;
	can_walk[1][5] = true;
	can_walk[2][1] = true;
	can_walk[2][3] = true;
	can_walk[2][5] = true;
	can_walk[3][1] = true;
	can_walk[3][2] = true;
	can_walk[3][4] = true;
	can_walk[3][5] = true;
	can_walk[4][3] = true;
	can_walk[4][5] = true;
	can_walk[5][1] = true;
	can_walk[5][2] = true;
	can_walk[5][3] = true;
	can_walk[5][4] = true;
}

void walking(int now, int steps) {
	if (steps == 8) {
		for (int i = 0; i < 8; i++) {
			cout << passed[i];
		}
		cout << now;
		cout << '\n';
		return;
	}
	passed[steps] = now;
	// cout << steps << '\n';
	for (int i = 1; i <= 5; i++) {
		if (can_walk[now][i] && !walked[now][i]) {
			// cout << "thereMayBeBug\n";
			walked[now][i] = true;
			walked[i][now] = true;
			walking(i, steps + 1);
			walked[now][i] = false;
			walked[i][now] = false;
		}
	}
}

int main() {
	figure();
	walking(1, 0);
	return 0;
}