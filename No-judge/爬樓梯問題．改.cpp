#include <iostream>
using namespace std;

int C[1000], cost[1000];
bool visited[1000];

int stair(int N) {
	if (visited[N]) {
		return cost[N];
	}
	visited[N] = true;
	if (N == 1 || N == 0) {
		cost[N] = C[N];
	}
	else {
		cost[N] = min(stair(N - 1), stair(N - 2)) + C[N];
	}
	return cost[N];
}

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> C[i];
	}
	cout << stair(N) << '\n';
	return 0;
}