//TOJ 513

#include <iostream>
using namespace std;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int c, d;
	scanf("%d%d", &c, &d);
	int m = c * 60 + d - a * 60 - b;
	if (m < 0) {
		m += 1440;
	}
	int h = m / 60;
	m %= 60;
	printf("totally %d hours and %d minutes.\n", h, m);
	return 0;
}