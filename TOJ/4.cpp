#include <iostream>
#include <algorithm>
using namespace std;

long long plug[1001], electric[1001];

int main() {
	int T;
	cin >> T;
	for (int cases = 1; cases <= T; cases++) {
		int N, L;
		cin >> N >> L;
		for (int i = 0; i < N; i++) {
			plug[i] = 0;
			string s;
			cin >> s;
			for (int j = 0; j < L; j++) {
				if (s[j] == '1') {
					plug[i] |= (1LL << j);
				}
			}
		}
		for (int i = 0; i < N; i++) {
			electric[i] = 0;
			string s;
			cin >> s;
			for (int j = 0; j < L; j++) {
				if (s[j] == '1') {
					electric[i] |= (1LL << j);
				}
			}
		}
		sort(electric, electric + N);
		int ans = -1;
		long long plug0 = plug[0];
		for (int i = 0; i < N; i++) { // plug[0] - electric[i]
			long long diff = (plug0 ^ electric[i]);
			long long num = diff;
			int change = 0;
			while (num != 0) {
				long long lowbit = num & (-num);
				change++;
				num ^= lowbit;
			}
			if (change >= ans && ans != -1) {
				break;
			}
			for (int i = 0; i < N; i++) {
				plug[i] ^= diff;
			}
			sort(plug, plug + N);
			bool same = true;
			for (int i = 0; i < N; i++) {
				if (electric[i] != plug[i]) {
					same = false;
					break;
				}
			}
			if (same) {
				if (ans == -1 || ans > change) {
					ans = change;
				}
			}
			for (int i = 0; i < N; i++) {
				plug[i] ^= diff;
			}
		}
		cout << "Case #" << cases << ": ";
		if (ans == -1) {
			cout << "IMPOSSIBLE\n";
		}
		else {
			cout << ans << '\n';
		}
	}
	return 0;
}