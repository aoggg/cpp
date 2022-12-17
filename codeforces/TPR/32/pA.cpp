// Problem: A. 新北耶誕城（Christmas Town）
// Contest: Codeforces - NHDK Ten Point Round #32 （Div. 2, based on NHDK APCS 模擬賽 #1）
// URL: https://codeforces.com/gym/415712/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 355;

int people[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", people + i);
	}
	int day = 0;
	for (int i = 1; i < n; i++) {
		if (people[i] > people[i - 1]) {
			day++;
		}
		else {
			ans = max(day, ans);
			day = 0;
		}
	}
	ans = max(day, ans);
	printf("%d\n", ans);
	return 0;
}