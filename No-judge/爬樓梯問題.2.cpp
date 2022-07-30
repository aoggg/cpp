#include <iostream>
using namespace std;

int step[1000];
bool visited[1000];

int counting(int N) {
	if (visited[N]) {
		return step[N];
	}
	visited[N] = true;
	if (N == 1 || N == 0) {
		step[N] = 1;
	}
	else {
		step[N] = counting(N - 1) + counting(N - 2);
	}
	return step[N];
}

int main() {
	int N;
	cin >> N;
	cout << counting(N) << '\n';
	return 0;
}