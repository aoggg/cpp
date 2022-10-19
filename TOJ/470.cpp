#include <iostream>
using namespace std;

const int MAXN = 1000005;

int sum[MAXN][2], train[MAXN];

int main() {
	int N;
	while (cin >> N) {
		for (int i = 1; i <= N; i++) {
			cin >> train[i];
		}
		for (int i = 0; i <= N; i++) {
			for (int j = 0; j < 2; j++) {
				sum[i][j] = 0;
			}
		}
		sum[1][0] = 0;
		sum[1][1] = train[1];
		for (int i = 2; i <= N; i++) {
			sum[i][0] = max(sum[i - 1][0], sum[i - 1][1]);
			sum[i][1] = sum[i - 1][0] + train[i];
		}
		cout << max(sum[N][0], sum[N][1]) << '\n';
	}
	return 0;
}