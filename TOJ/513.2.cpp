#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int hour = c - a, min = d - b;
	if (min < 0) {
		hour--;
		min += 60;
	}
	if (hour < 0) {
		hour += 24;
	}
	cout << "totally " << hour << " hours and " << min << " minutes.\n";
}