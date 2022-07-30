#include <iostream>
using namespace std;

int h[100000], cost[100000];

int main() {
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}
	cost[0] = 0;
	for (int i = 1; i < N; i++) {
		for (int j = 1; j <= K && i - j >= 0; j++) {
			if (j == 1) {
				cost[i] = abs(h[i] - h[i - j]) + cost[i - j];
			}
			cost[i] = min(cost[i], abs(h[i] - h[i - j]) + cost[i - j]);
		} 
	}
	cout << cost[N - 1] << '\n';
	return 0;
}