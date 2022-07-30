// Problem: C. 困難的問題 (hardtask)
// Contest: Codeforces - 2022 IONCamp Day3 練習賽之 Koios 好可愛
// URL: https://codeforces.com/group/z3GP4YeQl0/contest/391951/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

bool easy[100000];

int main() {
	int N, M;
	cin >> N >> M;
	while (M--) {
		int A, B;
		cin >> A >> B;
		A--;
		B--;
		if (A != B) {
			easy[A] = easy[B] = true;
		}
	}
	int ans = 0;
	for (int i = 0; i < N; i++) {
		if (!easy[i]) {
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}