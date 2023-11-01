// Problem: Two Sets
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1092
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Time: 2023-11-01 13:58:04

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 1e6 + 5;

bool used[MAXN];
int a[MAXN], b[MAXN];

int main() {
	ll n;
	scanf("%lld", &n);
	ll total = n * (n + 1) / 2;
	if (total % 2 == 1) puts("NO");
	else {
		puts("YES");
		ll amount = total / 2;
		int use = 0;
		for (int i = n; i > n / 2 && amount >= n / 2; i--) {
			amount -= i;
			used[i] = true;
			a[use] = i;
			use++;
		}
		if (amount < 0) {
			amount += n;
			if (used[amount] && amount % 2 == 1) {
				a[0] = amount / 2;
				used[amount / 2] = true;
				a[use] = amount / 2 + 1;
				used[amount / 2 + 1] = true;
				use++;
			}
			else if (used[amount] && amount % 2 == 0) {
				a[0] = amount / 2 - 1;
				used[amount / 2 - 1] = true;
				a[use] = amount / 2 + 1;
				used[amount / 2 + 1] = true;
				use++;
			}
			else {
				a[0] = amount;
				used[amount] = true;
			}
			used[n] = false;
		}
		else if (amount != 0) {
			used[amount] = true;
			a[use] = amount;
			use++;
		}
		printf("%d\n", use);
		for (int i = 0; i < use; i++) {
			if (i != 0) printf(" ");
			printf("%d", a[i]);
		} 
		puts("");
		printf("%d\n", n - use);
		bool first = true;
		for (int i = 1; i <= n; i++) {
			if (!used[i]) {
				if (!first) printf(" ");
				first = false;
				printf("%d", i);
			}
		}
		puts("");
	} 
	return 0;
}