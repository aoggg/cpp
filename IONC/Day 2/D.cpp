// Problem: D. 數數兒 (counting)
// Contest: Codeforces - 2022 IONCamp Day2 練習賽
// URL: https://codeforces.com/group/z3GP4YeQl0/contest/391823/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int L, R, k;
	cin >> L >> R >> k;
	int ans = 0;
	for (int i = L; i <= R; i++) {
		int num = i;
		while (num != 0) {
			if (k == num % 10) {
				ans++;
			}
			num /= 10;
		}
	}
	cout << ans << '\n';
	return 0;
}