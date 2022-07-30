#include <iostream>
using namespace std;

long long a[5001], sum[5001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	long long K;
	cin >> K;
	for (int i = 1; i <= N; i++) {
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	int amount = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j <= N; j++) {
			if (sum[j] - sum[i] <= K) {
				amount++;
			}
		}
	}
	cout << amount << '\n';
	return 0;
}