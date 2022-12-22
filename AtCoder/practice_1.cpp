// Problem: A - Welcome to AtCoder
// Contest: AtCoder - practice contest
// URL: https://atcoder.jp/contests/practice/tasks/practice_1
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	char s[105];
	scanf("%d%d%d", &a, &b ,&c);
	scanf("%s", &s);
	printf("%d %s\n", a + b + c, s);
	return 0;
}