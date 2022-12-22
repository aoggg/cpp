// Kattis rationalsequence3

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int P;
	scanf("%d", &P);
	while (P--) {
		int K, N;
		vector<int> num;
		scanf("%d%d", &K, &N);
		while (N != 0) {
			num.push_back((N & 1));
			N >>= 1;
		}
		int p = 1, q = 1;
		for (int i = num.size() - 2; i >= 0; i--) {
			if (num[i] == 0) {
				q = p + q;
			}
			else {
				p = q + p;
			}
		}
		printf("%d %d/%d\n", K, p, q);
	}
	return 0;
}