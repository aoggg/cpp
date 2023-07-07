// Problem: A - New Scheme
// Contest: AtCoder - AtCoder Beginner Contest 308
// URL: https://atcoder.jp/contests/abc308/tasks/abc308_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
	int last = 0, now = 0;
	scanf("%d", &last);
	bool ok = true;
	if (last % 25 != 0 || last < 100 || last > 675) ok = false;
	for (int i = 1; i < 8; i++) {
		scanf("%d", &now);
		if (last > now || now % 25 != 0) ok = false;
		if (now < 100 || now > 675) ok = false;
		if (!ok) break;
		last = now;
	}
	if (!ok) puts("No");
	else puts("Yes");
	return 0;
}