// ZJ a010

#include <iostream>
using namespace std;

struct info {
	int factor = 0;
	int num = 0;
};

const int MAXN = 1300;

info ans[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	int total = 0;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			ans[total].factor = i;
			while (n % i == 0) {
				n /= i;
				ans[total].num++;
			}
			total++;
		}
	}
	for (int i = 0; i < total; i++) {
		if (i != 0) {
			printf(" * ");
		}
		printf("%d", ans[i].factor);
		if (ans[i].num != 1) {
			printf("^%d", ans[i].num);
		}
	}
	puts("");
	return 0;
}