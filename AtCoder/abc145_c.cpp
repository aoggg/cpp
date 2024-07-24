// Problem: C - Average Length
// Contest: AtCoder - AtCoder Beginner Contest 145
// URL: https://atcoder.jp/contests/abc145/tasks/abc145_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Time: 2024-06-30 00:25:26

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int MAXN = 10;

struct locate {
	int x, y;
};

int N;
double lt = 0, amount = 0;
locate town[MAXN];
bool visited[MAXN];

double dis(int a, int b) {
	double lx = town[a].x - town[b].x;
	double ly = town[a].y - town[b].y;
	return sqrt(lx * lx + ly * ly);
}

void travel(int num, int now, double length) {
	if (num == N) {
		amount++;
		lt += length;
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			travel(num + 1, i, length + dis(now, i));
			visited[i] = false;
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) cin >> town[i].x >> town[i].y;
	for (int i = 0; i < N; i++) {
		visited[i] = true;
		travel(1, i, 0);
		visited[i] = false;
	}
	cout << fixed << setprecision(10) << lt / amount << '\n';
	return 0;
}