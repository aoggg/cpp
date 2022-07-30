// Problem: Bard
// Contest: Kattis
// URL: https://open.kattis.com/problems/bard
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int appeared[101];
long long villagers[101];

int main() {
	int N;
	cin >> N; //number of villagers
	int E;
	cin >> E; //number of evening
	int song = 0;
	while (E--) {
		int K;
		cin >> K; //the number of villagers present at the night
		bool bard = false;
		for (int i = 0; i < K; i++) {
			cin >> appeared[i];
			if (appeared[i] == 1) {
				bard = true;
			}
		}
		if (bard) {
			for (int i = 0; i < K; i++) {
				villagers[appeared[i]] |= (1 << song);
			}
			song++;
		}
		else {
			for (int i = 1; i < K; i++) {
				villagers[appeared[0]] |= villagers[appeared[i]];
			}
			for (int i = 1; i < K; i++) {
				villagers[appeared[i]] = villagers[appeared[0]];
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		if (villagers[i] == villagers[1]) {
			cout << i << '\n';
		}
	}
	return 0;
}