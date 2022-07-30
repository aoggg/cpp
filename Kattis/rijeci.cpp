#include <iostream>
using namespace std;

int main() {
	int K;
	cin >> K;
	int nA = 1, nB = 0;
	for (int i = 0; i < K; i++) {
		int mA = nB, mB = nA;
		nA = mA;
		nB += mB;
	}
	cout << nA << ' ' << nB << '\n';
	return 0;
}