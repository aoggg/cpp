// ZJ d491

#include <iostream>
using namespace std;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) {
		swap(a, b);
	}
	if (a % 2 == 1) {
		a++;
	}
	long long ans = 0;
	for (int i = a; i <= b; i += 2) {
		ans += i;
	}
	printf("%lld\n", ans);
	return 0;
}