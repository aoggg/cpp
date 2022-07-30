#include <iostream>
#include <cmath>
using namespace std;

int sol (int a, int b, int c) {
	return 2022 + abs(b - c) + (a * b) + (b * c) + (c * c) - abs((b * b) - (a * a));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	int ans = 0;
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N - i; j++) {
			int k = N - i - j;
			ans = max(ans, sol(i, j, k));
		}
	}
	cout << ans << '\n';
	return 0;
}