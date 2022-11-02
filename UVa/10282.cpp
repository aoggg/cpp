// Problem: 10282 - Babelfish
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

const int MAXN = 100000;

int amount = 0;
pair<string, string> vocab[MAXN];

string look(string s) {
	int l = 0, r = amount - 1;
	int times = 1000;
	while (times-- && l <= r) {
		int m = (l + r) / 2;
		if (vocab[m].first == s) {
			return vocab[m].second;
		}
		else if (vocab[m].first > s) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return "eh";
}

int main() {
	string s;
	while (getline(cin, s)) {
		string v[2] = {"", ""};
		int i, j;
		for (i = 0, j = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				j++;
				continue;
			}
			v[j] += s[i];
		}
		if (j == 0) {
			break;
		}
		vocab[amount] = {v[1], v[0]};
		amount++;
	}
	sort(vocab, vocab + amount);
	while (cin >> s) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = s[i] - 'A' + 'a';
			}
		}
		cout << look(s) << '\n';
	}
	return 0;
}