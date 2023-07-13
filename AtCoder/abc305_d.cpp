// Problem: D - Sleep Log
// Contest: AtCoder - KYOCERA Programming Contest 2023（AtCoder Beginner Contest 305）
// URL: https://atcoder.jp/contests/abc305/tasks/abc305_d
// Memory Limit: 1024 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll A[MAXN], sleepsum[MAXN], sw[MAXN]; //start work
int N;

int bsearch(ll n) {
	int now = 0, step = (N >> 1);
	while (step != 0) {
		int next = now + step;
		if (next >= N) step >>= 1;
		else if (A[next] <= n) now = next;
		else step >>= 1;
	}
	return now;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%lld", A + i);
		if (i % 2 == 0 && i != 0) {
			sleepsum[i / 2] = sleepsum[i / 2 - 1] + A[i] - A[i - 1];
		}
	}
	cerr << '\n';
	int Q;
	scanf("%d", &Q);
	while (Q--) {
		int l, r;
		scanf("%d%d", &l, &r);
		int li = bsearch(l);
		int ri = bsearch(r);
		int time = sleepsum[ri / 2] - sleepsum[(li + 1) / 2];
		if (li % 2 == 1) {
			time += A[li + 1] - l;
		}
		if (ri % 2 == 1) {
			time += r - A[ri];
		}
		cout << time << '\n';
	}
	return 0;
}