// Problem: D. 刪除遊戲 (Game)
// Contest: Codeforces - Ten Point Round #31 (Div. 2, based on 111 學年度國立新化高級中學 學科能力競賽資訊科 - 校內初選 )
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/412932/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <map>
using namespace std;

const int MAXN = 2001;

map<int, int> times;
int a[MAXN];
int ans = 0;
int N;

void counter(int n) {
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			times[i]++;
			if (times[i] >= N - 2) {
				ans = max(ans, i);
			}
			if (i * i != n) {
				times[n / i]++;
				if (times[n / i] >= N - 2) {
					ans = max(ans, n / i);
				}
			}
		}
	}
	return;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", a + i);
		counter(a[i]);
	}
	printf("%d\n", ans);
	return 0;
}