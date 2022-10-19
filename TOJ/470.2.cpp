#include <iostream>
using namespace std;

const int MAXN = 1e6 + 5;

int train[MAXN], sum[MAXN];

int main() {
	int N;
	while (cin >> N) {
		for (int i = 1; i <= N; i++) {
			cin >> train[i];
		}
		for (int i = 0; i <= N; i++) {
			sum[i] = 0;
		}
		sum[1] = max(0, train[1]);
		for (int i = 2; i <= N; i++) {
			sum[i] = max(sum[i - 2] + train[i], sum[i - 1]);
		}
		cout << sum[N] << '\n';
	}
	return 0;
}