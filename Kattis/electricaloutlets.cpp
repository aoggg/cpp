// Problem: Electrical Outlets
// Contest: Kattis
// URL: https://open.kattis.com/problems/electricaloutlets
// Memory Limit: 1024 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int K;
		cin >> K;
		int ans = 0 - K;
		for (int j = 0; j < K; j++) {
			int num;
			cin >> num;
			ans += num;
		}
		cout << ans + 1 << '\n';
	}
	return 0;
}