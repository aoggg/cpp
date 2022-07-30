#include <iostream>
#include <algorithm>
using namespace std;

int num[100000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	for (int i = 0; i < k; i++) {
		int ask;
		cin >> ask;
		bool possible = false;
		int l = 0, r = n - 1;
		while (!possible && l <= r) {
			int mid = (l + r) / 2;
			if (num[mid] == ask) {
				possible = true;
				break;
			}
			else if (num[mid] < ask) {
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
		if (!possible) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	return 0;
}