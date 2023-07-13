// Problem: B - ABCDEFG
// Contest: AtCoder - KYOCERA Programming Contest 2023（AtCoder Beginner Contest 305）
// URL: https://atcoder.jp/contests/abc305/tasks/abc305_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

const int DIS[] = {3, 1, 4, 1, 5, 9};
const string ABCDEFG = "ABCDEFG";

int main() {
	char a, b;
	cin >> a >> b;
	if (a > b) swap(a, b);
	int ans = 0;
	for (int i = a - 'A'; i < b - 'A'; i++) {
		ans += DIS[i];
	}
	cout << ans << '\n';
	return 0;
}