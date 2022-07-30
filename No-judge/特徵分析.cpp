#include <iostream>
using namespace std;

int C[1024];

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int Cnum;
		cin >> Cnum;
		for (int j = 0; j < Cnum; j++) {
			int num;
			cin >> num;
			C[i] |= (1 << num);
		}
	}
	int Q;
	cin >> Q;
	while (Q--) {
		int Pnum, P = 0;
		cin >> Pnum;
		while (Pnum--) {
			int num;
			cin >> num;
			P |= (1 << num);
		}
		int ans = 0;
		for (int i = 0; i < N; i++) {
			if ((P & C[i]) != 0) {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}