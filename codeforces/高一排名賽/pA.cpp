#include <iostream>
using namespace std;

int x[2], y[2], r[2];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	for (int i = 0; i < 2; i++) {
		cin >> x[i] >> y[i] >> r[i];
	}
	int area = 0;
	for (int i = max(x[1], x[0]); i < min(x[0] + r[0], x[1] + r[1]); i++) {
		for (int j = max(y[0], y[1]); j < min(y[0] + r[0], y[1] + r[1]); j++) {
			area++;
		}
	}
	cout << area << '\n';
	return 0;
}