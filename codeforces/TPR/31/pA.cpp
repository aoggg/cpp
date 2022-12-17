// Problem: A. 出遊調查 (Travelling)
// Contest: Codeforces - Ten Point Round #31 (Div. 2, based on 111 學年度國立新化高級中學 學科能力競賽資訊科 - 校內初選 )
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/412932/problem/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int week = n / 7;
	int day = n % 7;
	int ans = week + week / 2;
	week++;
	for (int i = 1; i <= min(4, day); i++) {
		if (week % 2 == 0 && (i == 2 || i == 4)) {
			ans++;
		}
		if (week % 2 == 1 && i == 1) {
			ans++;
			break;
		}
	}
	printf("%d\n", ans);
	return 0;
}