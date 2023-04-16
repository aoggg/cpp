// Problem: B. 排名again
// Contest: Codeforces - 台南高中競技程式練盟練習賽-三月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/431691/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 1e5 + 5;

struct info {
	ll score;
	int rk;
	int pos;
};

info ch[MAXN], math[MAXN], sum[MAXN];
int chrk[MAXN], mathrk[MAXN], sumrk[MAXN];

bool cmp(info a, info b) {
	return a.score > b.score;
}

void ptr(info a[], int rk[], int n) {
	a[0].rk = 1;
	rk[a[0].pos] = a[0].rk;
	for (int i = 1; i < n; i++) {
		if (a[i].score == a[i - 1].score) {
			a[i].rk = a[i - 1].rk;
		}
		else {
			a[i].rk = i + 1;
		}
		rk[a[i].pos] = a[i].rk;
	}
	return;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld%lld", ch + i, math + i);
		ch[i].pos = math[i].pos = sum[i].pos = i;
		sum[i].score = ch[i].score + math[i].score;
	}
	sort(ch, ch + n, cmp);
	sort(math, math + n, cmp);
	sort(sum, sum + n, cmp);
	ptr(ch, chrk, n);
	ptr(math, mathrk, n);
	ptr(sum, sumrk, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", chrk[i], mathrk[i], sumrk[i]);	
	}
	return 0;
}