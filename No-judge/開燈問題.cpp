#include <iostream>
using namespace std;

int C[1024];

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int Cnum;
		cin >> Cnum;
		while (Cnum--) {
			int num;
			cin >> num;
			C[i] |= (1 << num);
		}
	}
	int Q;
	cin >> Q;
	while (Q--) {
		int Pnum;
		cin >> Pnum;
		int P = 0;
		while (Pnum--) {
			int num;
			cin >> num;
			P ^= C[num - 1];
		}
		for (int i = 0; i < M; i++) {
		 	P >>= 1; 
			cout << (P & 1);
		}
		cout << '\n';
	}
	return 0;
}