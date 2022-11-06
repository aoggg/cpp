//TOJ 517

#include <iostream>
using namespace std;

const int MAXN = 1e5 + 5;
const int PAPER = 5;
const int SCISSOR = 2;
const int STONE = 0;


int my[MAXN], your[MAXN];

int main() {
	int n;
	cin >> n;
	int iwin = 0, uwin = 0; 
	for (int i = 0; i < n; i++) {
		cin >> my[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> your[i];
	}
	for (int i = 0; i < n; i++) {
		if (my[i] == your[i]) {
			iwin++;
			uwin++;
			continue;
		}
		if (my[i] == PAPER) {
			if (your[i] == STONE) {
				iwin += 3;
				uwin--;
			}
			else {
				uwin += 3;
				iwin--;
			}
		}
		else if (my[i] == STONE) {
			if (your[i] == SCISSOR) {
				iwin += 3;
				uwin--;
			}
			else {
				uwin += 3;
				iwin--;
			}
		}
		else {
			if (your[i] == PAPER) {
				iwin += 3;
				uwin--;
			}
			else {
				uwin += 3;
				iwin--;
			}
		}
	}
	cout << iwin << ' ' << uwin << '\n';
	return 0;
}