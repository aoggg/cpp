#include <iostream>
using namespace std;

int happy[3][100000], cost[3][100000];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> happy[j][i];
		}
	}
	for (int i = 0; i < 3; i++) {
		cost[i][0] = happy[i][0];
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cost[j][i] = max(cost[(j + 1) % 3][i - 1], cost[(j + 2) % 3][i - 1]) + happy[j][i];
		}
	}
	int ans = max(cost[0][N - 1], cost[1][N - 1]);
	cout << max(ans, cost[2][N - 1]) << '\n';
	return 0;
}