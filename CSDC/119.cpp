// CSDC OJ 119
// 2024-07-04

#include <iostream>
using namespace std;

const int MAXN = 20;
const string ORPHAN[] = {"1m", "9m", "1p", "9p", "1s", "9s", "1z", "2z", "3z", "4z", "5z", "6z", "7z"};

string s[MAXN];
bool card[MAXN];

bool check(string c) {
	for (int i = 0; i < 13; i++) {
		if (ORPHAN[i] == c) {
			card[i] = true;
			return true;
		}
	}
	return false;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		for (int i = 0; i < 14; i++) cin >> s[i];
		for (int i = 0; i < 14; i++) card[i] = false;
		bool kokushi = true;
		for (int i = 0; kokushi && i < 14; i++) {
			if (!check(s[i])) kokushi = false;
		}
		for (int i = 0; kokushi && i < 13; i++) {
			if (!card[i]) kokushi = false;
		}
		if (kokushi) cout << "kokushi musou(Thirteen orphans)\n";
		else cout << "no!\n";
	}
	return 0;
}