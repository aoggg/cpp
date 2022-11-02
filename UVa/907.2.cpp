//UVa 907
#include <iostream>
using namespace std;

const int MAXN = 605;

struct info {
	int place, steps;
};

int far[MAXN][MAXN];
bool passed[MAXN];
info route[MAXN];
int N, K;

void init() {
	for (int i = 0; i < MAXN; i++) {
		passed[i] = false;
	}
}

bool check(int x, int nx, int d) {
	if (!passed[nx] && far[x][nx] <= d) {
		return true;
	}
	return false;
}

bool possible(int d) {
	route[0].place = 0;
	route[0].steps = 0;
	for (int now = 0, next = 1; now < next; now++) {
		int place = route[now].place;
		int steps = route[now].steps;
		if (place == N + 1) {
			if (steps <= K + 1) {
				return true;
			}
		}
		for (int i = place + 1; i <= N + 1; i++) {
			if (check(place, i, d)) {
				passed[i] = true;
				route[next].place = i;
				route[next].steps = steps + 1;
				next++;
			}
		}
	}
	return false;
}

int main() {
	while (cin >> N >> K) {
		for (int i = 1; i <= N + 1; i++) {
			cin >> far[i - 1][i];
		}
		for (int i = 0; i <= N + 1; i++) {
			far[i][i] = 0;
		}
		int most = 0, least = 1e9;
		for (int i = 0; i <= N; i++) {
			for (int j = i + 1; j <= N + 1; j++) {
				far[i][j] = far[i][j - 1] + far[j - 1][j];
				most = max(far[i][j], most);
				least = min(far[i][j], least);
			}
		}
		int steps = (most >> 1);
		int basic = most;
		while (steps != 0) {
			init();
			if (basic - steps >= least && possible(basic - steps)) {
				basic -= steps;
			}
			else {
				steps >>= 1;
			}
		}
		// int l = least, r = most;
		// int times = 1000;
		// while (times-- && l <= r) {
			// init();
			// int m = (l + r) / 2;
			// if (possible(m)) {
				// r = m;
			// }
			// else {
				// l = m + 1;
			// }
		// }
		cout << basic << '\n';
	}
	return 0;
}