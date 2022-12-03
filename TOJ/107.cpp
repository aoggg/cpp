#include <iostream>
using namespace std;

int count(int i) {
	int n = 0;
	for (int j = 1; j <= i; j++) {
		n += j;
	}
	return n;
}

int main() {
	long long ans = 0;
	for (int i = 1; i <= 30; i++) {
		ans++; //son
		ans += i; //grandson
		ans += i * count(i); //grandgrandson
	}
	cout << ans << '\n';
	return 0;
}