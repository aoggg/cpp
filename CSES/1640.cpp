// Problem: Sum of Two Values
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1640/
// Memory Limit: 512 MB
// Time Limit: 1000 ms

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 2e5 + 5;

struct info {
	int data, pos;
} num[MAXN];

bool cmp(info a, info b) {
	return a.data < b.data;
}

int main() {
	int n, x;
	scanf("%d%d", &n, &x);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i].data);
		num[i].pos = i;
	}
	sort(num + 1, num + n + 1, cmp);
	int left = 1, right = n;
	bool possible = false;
	while (right > left) {
		if (num[left].data + num[right].data == x) {
			possible = true;
			int p1 = num[left].pos, p2 = num[right].pos;
			printf("%d %d\n", min(p1, p2), max(p1, p2));
			break;
		}
		if (num[left].data + num[right].data > x) {
			right--;
		}
		else {
			left++;
		}
	}
	if (!possible) {
		puts("IMPOSSIBLE");
	}
	return 0;
}