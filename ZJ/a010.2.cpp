// ZJ a010

#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	bool FT = true;
	for (int i = 2; i <= n && n != 0; i++) {
		int factor;
		int num = 0;
		if (n % i == 0) {
			if (!FT) {
				printf(" * ");
			}
			FT = false;
			factor = i;
			while (n % i == 0) {
				num++;
				n /= i;
			}
			printf("%d", factor);
			if (num != 1) {
				printf("^%d", num);
			}
		}
	}
	puts("");
	return 0;
}