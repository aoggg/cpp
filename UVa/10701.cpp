// Problem: 10701 - Pre, in and post
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1642
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

void print(string preord, string inord) {
	if (preord.size() == 1) {
		cout << preord;
		return;
	}
	if (preord.size() == 0) {
		return;
	}
	char mid = preord[0];
	string left_pre = "", right_pre = "";
	string left_in = "", right_in = "";
	int ll = 0;
	for (int i = 0; i < inord.size(); i++) {
		if (inord[i] == mid) {
			break;
		}
		ll++;
		left_in += inord[i];
	}
	for (int i = 1; i <= ll; i++) {
		left_pre += preord[i];
	}
	for (int i = ll + 1; i < inord.size(); i++) {
		right_in += inord[i];
		right_pre += preord[i];
	}
	print(left_pre, left_in);
	print(right_pre, right_in);
	cout << mid;
}

int main() {
	int C;
	cin >> C;
	while (C--) {
		int N;
		cin >> N;
		string preord, inord;
		cin >> preord >> inord;
		print(preord, inord);
		cout << '\n';
	}
	return 0;
}