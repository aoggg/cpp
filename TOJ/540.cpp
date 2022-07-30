#include <iostream>
using namespace std;

long long sport[3][200000], cost[3][200000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> sport[j][i];
			cost[j][i] = 1000000000;
		}
	}
	cost[0][0] = sport[0][0];
	for (int i = 1; i < N; i++) {
		cost[0][i] = cost[0][i - 1] + sport[0][i];
		for (int j = 1; j < 3; j++) {
			cost[j][i] = min(cost[j - 1][i - 1], cost[j][i - 1]) + sport[j][i];
		}
	}
	cout << cost[2][N - 1] << '\n';
}