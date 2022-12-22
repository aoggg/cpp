#include <iostream>
#include <algorithm>
using namespace std;

long long A[100000];

int main() {
	long long N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}
	long long ans = 0;
	sort(A, A + N + 1);
	long long a = 1, i;//同時玩幾個
	long long now;
	for (i = N, a = 1; i >= 1 && K >= a; i--, a++) {
		now = A[i];
		// cout << A[i] << ' ';
		if (A[i] <= 0) {
			K = 0;
			break;
		}
		long long d = A[i] - A[i - 1];//現在在玩的遊樂設施和下一個快樂度的差距
		long long times;
		if (d * a <= K) {
			times = d;
		}
		else {//d * a > K
			times = K / a;
		}
		ans += a * (2 * A[i] - times + 1) * times / 2;
		now = A[i] - times + 1;
		K -= times * a;
		// cout << K << '\n';
	}
	if (K > 0 && K <= a) {
		ans += K * max(now - 1, (long long)0);
	}
	cout << ans << '\n';
	return 0;
}