//TOJ 119

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;

int id[MAXN];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> id[i];
	}
	int T;
	cin >> T;
	bool quit = false;
	while (T--) {
		int a, b;
		cin >> a >> b;
		if (abs(a - b) > 8) {
			quit = true;
		}
		else if (!quit) {
			swap(id[a - 1], id[b - 1]);
		}
	}
	if (!quit) {
		cout << "SORTED!\n";
	}
	else {
		cout << "I QUIT!\n";
	}
	for (int i = 0; i < N; i++) {
		if (i != 0) {
			cout << ' ';
		}
		cout << id[i];
	}
	cout << '\n';
	return 0;
}