// Kattis jointattack

#include <iostream>
using namespace std;

const int MAXN = 45;

int x[MAXN];

int main() {
	long long deno, nume;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", x + i);
	}
	deno = 1;
	nume = x[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		swap(nume, deno);
		nume += deno * x[i];
	}
	printf("%lld/%lld\n", nume, deno);
	return 0;
}