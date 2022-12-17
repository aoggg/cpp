// TOJ 658 - std::sort

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 2e5 + 5;

int a[MAXN];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", a + i);
	}
	sort(a, a + N);
	for (int i = 0; i < N; i++) {
		if (i != 0) {
			printf(" ");
		}
		printf("%d", a[i]);
	}
	puts("");
	return 0;
}