// Problem: Weird Algorithm
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1068/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 08:12:07

#include <iostream>
using namespace std;

int main() {
	long long n;
	scanf("%lld", &n);
	while (n != 1) {
		printf("%lld ", n);
		if (n % 2 != 0) n = n * 3 + 1;
		else n /= 2;
	}
	puts("1");
	return 0;
}