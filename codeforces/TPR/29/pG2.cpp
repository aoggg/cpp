// Problem: G2. Gunjyo 與骰子 II (Gunjyo and dice II)【Hard Version】
// Contest: Codeforces - Ten Point Round #29 (Div. 3, based on 第三屆新化高中程式資訊營-營末練習賽)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/401283/problem/G2
// Memory Limit: 256 MB
// Time Limit: 5000 ms

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 18000 + 5;

ll way[MAXN];
int a[5], n;

void counter(int dice, int amount) {
	if (dice == n) {
		way[amount]++;
		return;
	}
	for (int i = 1; i <= 3; i++) {
		counter(dice + 1, amount + a[i]);
	}
}

int main() {
	int q;
	scanf("%d%d%d%d%d", &n, a + 1, a + 2, a + 3, &q);
	counter(0, 0);
	for (int i = 1; i <= 18000; i++) {
		way[i] += way[i - 1];
	}
	while (q--) {
		int x;
		scanf("%d", &x);		
		printf("%lld\n", way[x]);
	}
	return 0;
}