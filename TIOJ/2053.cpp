#include <iostream>
using namespace std;
using place = long long(*)[2];

const long long MOD = 1000000007;

long long x[2];
long long basic[2][2], transfer[2][2], m[2][2];

void multiple(place matrix1, place matrix2) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			m[i][j] = 0;
			for (int k = 0; k < 2; k++) {
				m[i][j] += matrix1[i][k] * matrix2[k][j] % MOD;
				m[i][j] %= MOD;
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			matrix1[i][j] = m[i][j];
		}
	}
}

int main() {
	
	long long n, b, a;
	cin >> x[0] >> x[1] >> a >> b >> n;
	n--;
	
	basic[0][0] = 1;
	basic[1][1] = 1;
	basic[1][0] = 0;
	basic[0][1] = 0;
	transfer[0][0] = b;
	transfer[0][1] = a;
	transfer[1][0] = 1;
	transfer[1][1] = 0;
	
	while (n != 0) {
		place tp = transfer, bp = basic;
		if ((n & 1) == 1) {
			multiple(bp, tp);
		}
		multiple(tp, tp);
		n >>= 1;
	}
	//output
	long long ans = (x[1] * basic[1][0] % MOD + x[0] * basic[1][1] % MOD) % MOD;
	cout << ans << '\n';
	
	return 0;
}