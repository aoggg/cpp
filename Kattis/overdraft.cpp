// Problem: Overdraft
// Contest: Kattis
// URL: https://open.kattis.com/problems/overdraft
// Memory Limit: 2048 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int ans = 1e9;
	int money = 0;
	while (n--) {
		int t;
		scanf("%d", &t);
		money += t;
		ans = min(ans, money);
	}
	if (ans >= 0) {
		puts("0");
	}
	else {
		printf("%d\n", -ans);
	}
	return 0;
}