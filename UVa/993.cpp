#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int N;
		cin >> N;
		string ans = "";
		bool possible = true;
		if (N == 1) {
			cout << 1 << '\n';
		}
		else {
			while (N != 1 && possible) {
				possible = false;
				for (int i = 9; i >= 2; i--) {
					if (N % i == 0) {
						possible = true;
						N /= i;
						ans += (char) (i + '1' - 1);
						break;
					}
				}
			}
			if (!possible) {
				cout << -1 << '\n';
			}
			else {
				for (int i = ans.size() - 1; i >= 0; i--){
					cout << ans[i];
				}
				cout << '\n';
			}
		}
	}
	return 0;
}