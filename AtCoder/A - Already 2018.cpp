// Problem: A - Already 2018
// Contest: AtCoder - AtCoder Beginner Contest 085
// URL: https://atcoder.jp/contests/abc085/tasks/abc085_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int year, month, day;
	scanf("%d/%d/%d", &year, &month, &day);
	printf("%d/%02d/%02d\n", year + 1, month, day);
	return 0;
}