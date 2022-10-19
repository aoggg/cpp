// Problem: A. 出遊調查 (Travelling)
// Contest: Codeforces - 國立新化高級中學 111 學年度學科能力競賽 資訊科 TEST
// URL: https://codeforces.com/gym/394748/problem/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int week = n / 7;
	int days = n % 7;
	int ans = week + week / 2;
	week++;
	for (int i = 1; i <= min(4, days); i++) {
		if (week % 2 == 0 && (i == 2 || i == 4)) {
			ans++;
		}
		if (week % 2 == 1 && i == 1) {
			ans++;
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}