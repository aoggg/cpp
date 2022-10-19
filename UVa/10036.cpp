// Problem: 10036 - Divisibility
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=977
// Memory Limit: 32 MB
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

const int MAXN = 10005;

int amount[MAXN][105], num[MAXN];

int main() {
	int M;
	cin >> M;
	while (M--) {
		int N, K;
		cin >> N >> K;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < K; j++) {
				amount[i][j] = 0;
			}
		}
		for (int i = 0; i < N; i++) {
			cin >> num[i];
		}
		num[0] %= K;
		if (num[0] < 0) {
			num[0] += K;
		}
		amount[0][num[0]] = 1;
		for (int i = 1; i < N; i++) {
			for (int j = 0; j < K; j++) {
				int add = (j + num[i]) % K;
				if (add < 0) {
					add += K;
				}
				int subtract = (j - num[i]) % K;
				if (subtract < 0) {
					subtract += K;
				}
				amount[i][add] += amount[i - 1][j];
				if (amount[i][add] != 0) {
					amount[i][add] = 1;
				}
				amount[i][subtract] += amount[i - 1][j];
				if (amount[i][subtract] != 0) {
					amount[i][subtract] = 1;
				}
			}
		}
		if (amount[N - 1][0] == 0) {
			cout << "Not divisible\n";
		}
		else {
			cout << "Divisible\n";
		}
	}
	return 0;
}