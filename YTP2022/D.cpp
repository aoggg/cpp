#include <iostream>
using namespace std;

int X[2005], ans = 0;
int D, Y;

void counter(int num, int now, int target) {
	// cout << target << '\n';
	if (num == 4 && target == 0) {
		ans++;
		// cout << "hi\n";
		return;
	}
	if (num == 4) {
		// cout << "hiiii\n";
		return;
	}
	// cout << now + 1 << ' ' << D - 4 + num << '\n';
	for (int i = now + 1; i <= D - 4 + num; i++) {
		// cout << "meowwwww\n";
		counter(num + 1, i, target - X[i]);
	}
	// cout << "meow?\n";
	return;
}

int main() {
	cin >> D >> Y;
	for (int i = 0; i < D; i++) {
		cin >> X[i];
	}
	counter(0, -1, Y);
	cout << ans << '\n';
	return 0;
}