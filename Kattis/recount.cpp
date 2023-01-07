// Problem: Recount
// Contest: Kattis
// URL: https://open.kattis.com/problems/recount
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e5 + 5;

string vote[MAXN];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string name;
	int total = 0;
	while (getline(cin, name)) {
		if (name == "***") {
			break;
		}
		vote[total] = name;
		total++;
	}
	sort(vote, vote + total);
	int ans = -1e9, num = 0;
	bool runoff = false;
	string win = "";
	for (int i = 0; i < total; i++) {
		if (i == 0 || vote[i] != vote[i - 1]) {
			if (ans == num) {
				runoff = true;
			}
			else if (ans < num) {
				if (i == 0) {
					win = vote[i];
				}
				else {
					win = vote[i - 1];
				}
			}
			ans = max(num, ans);
			num = 0;
		}
		num++;
	}
	if (runoff) {
		cout << "Runoff!\n";
	}
	else {
		cout << win << '\n';
	}
	return 0;
}