#include <iostream>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;
	while (T--) {
		ll M, W;
		cin >> M >> W; // M - mod
		W %= M;
		ll sum = W;
		ll L, C;
		if (W % 2 == 0 && W % 4 != 0 && M % 4 == 0) cout << "-1\n";
		else if (M % 2 != 0 || W % 2 != 0) {
			while (sum < 3 || sum % 2 == 0) {
				sum += M;
			}
			C = (sum - 1) / 2;
			L = C + 1;
			cout << L << ' ' << C << '\n';
		}
		else {
			while (sum % 4 != 0) {
				sum += M;
			}
			C = sum / 4 - 1;
			L = C + 2;
			cout << L << ' ' << C << '\n';
		}
	}
	return 0;
}
