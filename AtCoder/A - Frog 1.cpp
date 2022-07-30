#include <iostream>
using namespace std;

int h[100000], cost[100000];
bool visited[100000];

int jumping(int N) {
	if (N <= 0) {
		return 0;
	}
	if (N == 1) {
		return abs(h[N] - h[0]);	
	}
	if (visited[N]) {
		return cost[N];
	}
	visited[N] = true;
	cost[N] = min(abs(h[N] - h[N - 1]) + jumping(N - 1), abs(h[N] - h[N - 2]) + jumping(N - 2));
	return cost[N];
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}
	cout << jumping(N - 1) << '\n';
	return 0;
}