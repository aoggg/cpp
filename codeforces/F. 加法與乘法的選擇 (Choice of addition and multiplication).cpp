#include <iostream>
using namespace std;

int main() {
	int score = 1;
	for (int time = 0; time < 4; time++) {
		int card1, card2;
		cin >> card1 >> card2;
		score = max(score + card1, score * card2);
	}
	cout << score << '\n';
	return 0;
}