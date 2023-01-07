// Problem: Batmanacci
// Contest: Kattis
// URL: https://open.kattis.com/problems/batmanacci
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 1e5;

long long length[MAXN];

int main() {
	int N;
	long long K;
	scanf("%d%lld", &N, &K);
	length[0] = 0;
	length[1] = 1;
	int most;
	for (int i = 2; i <= N; i++) {
		length[i] = length[i - 2] + length[i - 1];
		if (length[i] >= K) {
			most = i;
			break;
		}
	}
	while (N > 2) {
		if (N - 2 >= most) {
			N -= 2;
			continue;
		}
		if (length[N - 2] >= K) {
			N -= 2;
		}
		else {
			K -= length[N - 2];
			N--;
		}
	}
	if (N == 1) {
		puts("N");
	}
	else {
		puts("A");
	}
	return 0;
}