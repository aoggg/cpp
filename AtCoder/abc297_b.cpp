// Problem: B - chess960
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int Bp[2], Rp[2], Kp;
	for (int i = 0, bn = 0, rn = 0; i < 8; i++) {
		if (s[i] == 'B') {
			Bp[bn] = i;
			bn++;
		}
		else if (s[i] == 'R') {
			Rp[rn] = i;
			rn++;
		}
		else if (s[i] == 'K') Kp = i;
	}
	if (Bp[0] % 2 != Bp[1] % 2 && Rp[0] < Kp && Kp < Rp[1]) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}