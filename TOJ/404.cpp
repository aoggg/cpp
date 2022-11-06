//TOJ 404
#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 105;

int gene[MAXN];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> gene[i];
	}
	sort(gene, gene + n);
	int a = gene[0];
	int b = gene[n - 1];
	cout << a << ' ' << b << ' ';
	if (b - a + 1 == n) {
		cout << "yes\n";
	}
	else {
		cout << "no\n";
	}
	return 0;
}