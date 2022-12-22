// Problem: A - Placing Marbles
// Contest: AtCoder - AtCoder Beginner Contest 081
// URL: https://atcoder.jp/contests/abc081/tasks/abc081_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int s;
	scanf("%d", &s);
	printf("%d\n", s / 100 + s / 10 % 10 + s % 10);
	return 0;
}