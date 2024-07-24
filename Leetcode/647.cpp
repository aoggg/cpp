// Leetcode 647
// 2024-06-26

#include <iostream>
using namespace std;

string s;

bool palindrome(int l, int r) {
	for (int i = l, j = r; i <= r && j >= l; i++, j--) {
		if (s[i] != s[j]) return false;
	}
	return true;
}

int main() {
	int ans = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			if (palindrome(i, j)) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}