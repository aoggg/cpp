// Problem: A. 放大器 (amplifier)
// Contest: Codeforces - 2022 IONCamp Day2 練習賽
// URL: https://codeforces.com/group/z3GP4YeQl0/contest/391823/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

long long a[100000], b[100000], f[100000];

int main() {
	int N, Q;
	long long p;
	cin >> N >> Q >> p;
	f[0] = f[1] = 1;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> b[i];
	}
	while (Q--) {
		int id;
		long long A, B;
		cin >> id >> A >> B;
		a[id - 1] = A;
		b[id - 1] = B;
		for (int i = 2; i < N; i++) {
			f[i] = (f[i - 2] * a[i] % p + f[i - 1] * b[i] % p) % p;
			// cout << "f[" << i + 1 << "]" << " = " << f[i] << '\n';
		}
		cout << f[N - 1] % p << '\n';
	}
	return 0;
}