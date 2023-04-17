// TOJ 674

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ll x, y;
		scanf("%lld%lld", &x, &y);
		ll d = sqrt(x * x + y * y);
		if (x == 0 && y == 0) {
			puts("0");
		}
		else if (d * d == x * x + y * y) {
			puts("1");
		}
		else {
			puts("2");
		}
	}
	return 0;
} 