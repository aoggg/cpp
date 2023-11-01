// Problem: Palindrome Reorder
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1755
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 14:40:20

#include <iostream>
using namespace std;

const int MAXN = 30;

int num[MAXN];

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		num[s[i] - 'A']++;
	}
	bool possible = true;
	int mid = -1;
	for (int i = 0; i < 26; i++) {
		if (num[i] % 2 == 1) {
			if (mid != -1) {
				possible = false;
				break;
			}
			mid = i;
		}
	}
	if (possible) {
		for (int i = 0; i < 26; i++) {
			if (i == mid) continue;
			for (int j = 0; j < num[i] / 2; j++) cout << (char)(i + 'A');
		}
		for (int i = 0; i < num[mid]; i++) cout << (char)(mid + 'A');
		for (int i = 25; i >= 0; i--) {
			if (i == mid) continue;
			for (int j = 0; j < num[i] / 2; j++) cout << (char)(i + 'A');  
		}
	}
	else {
		cout << "NO SOLUTION";
	}
	cout << '\n';
	return 0;
}