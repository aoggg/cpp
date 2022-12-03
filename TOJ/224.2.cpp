#include <iostream>
using namespace std;

long long counter(long long a, long long b, long long ans) {
	if (a > b) {
		return ans;
	}
	else {
		return counter(a + 1, b, ans * a);
	}
}

int main() {
	long long a, b, c;
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	cout << counter(a, b, 1) << '\n';
	return 0;
}