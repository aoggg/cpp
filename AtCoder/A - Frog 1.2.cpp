#include <iostream>
using namespace std;

int h[100000], cost[100000];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}
	cost[0] = 0;
	cost[1] = abs(h[1] - h[0]);
	for (int i = 2; i < N; i++) {
		cost[i] = min(abs(h[i] - h[i - 1]) + cost[i - 1], abs(h[i] - h[i - 2]) + cost[i - 2]);
	}
	cout << cost[N - 1] << '\n';
	return 0;
}