//TOJ 117
#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int highest = 0;
	while (a--) {
		int score;
		cin >> score;
		highest = max(highest, score);
	}
	cout << highest << '\n';
	return 0;
}