// Kattis ferryloading4

#include <iostream>
using namespace std;

const int MAXN = 1e4 + 5;

int Lcar[MAXN], Rcar[MAXN];

int main() {
	int c;
	cin >> c;
	while (c--) {
		int l, m;
		cin >> l >> m;
		l *= 100;
		int ln = 0, rn = 0;
		for (int i = 0; i < m; i++) {
			int car;
			string bank;
			cin >> car >> bank;
			if (bank == "left") {
				Lcar[ln] = car;
				ln++;
			}
			else {
				Rcar[rn] = car;
				rn++;
			}
		}
		int times = 0;
		bool take_right = false;
		for (int rnow = 0, lnow = 0; rnow < rn || lnow < ln; times++, take_right = !take_right) {
			int total = 0;
			if (take_right) {
				while (rnow < rn && total + Rcar[rnow] < l) {
					total += Rcar[rnow];
					rnow++;
				}
			}
			else {
				while (lnow < ln && total + Lcar[lnow] < l) {
					total += Lcar[lnow];
					lnow++;
				}
			}
		}
		cout << times << '\n';
	}
	return 0;
}