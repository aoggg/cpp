#include <iostream>
using namespace std;

bool protect[100];
char plot[100];

int main() {
	int T;
	cin >> T;
	for (int cases = 1; cases <= T; cases++) {
		cout << "Case " << cases << ": ";
		int N;
		cin >> N;
		for (int i = 0; i < N; i++) {
			protect[i] = false;
		}
		for (int i = 0; i < N; i++) {
			cin >> plot[i];
			if (plot[i] == '#') {
				protect[i] = true;
			}
		}
		int ans = 0;
		for (int i = 1; i < N; i++) {
			if (!protect[i - 1]) {
				ans++;
				for (int j = -1; j <= 1; j++) {
					protect[i + j] = true;
				}
			}
		}
		if (!protect[N - 1]) {
			ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}