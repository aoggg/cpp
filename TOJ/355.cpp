//TOJ 355

#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int most = 0, second = 0;
	for (int i = 0; i < N; i++) {
		int ability;
		cin >> ability;
		if (ability >= most) {
			second = most;
			most = ability;
		}
		else if (ability > second) {
			second = ability;
		}
	}
	cout << second << '\n';
	return 0;
}