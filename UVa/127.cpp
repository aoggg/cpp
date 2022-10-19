// Problem: 127 - "Accordian" Patience
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=63
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

struct info {
	char rank, suit;
};

info card[60][60]; //[piles][the card's place in the pile]
int piles[60];
int pn;

bool match(int a, int b) {
	return card[a][piles[a] - 1].rank == card[b][piles[b] - 1].rank || card[a][piles[a] - 1].suit == card[b][piles[b] - 1].suit;
}

void moved(int i, int j) {
	card[j][piles[j]] = card[i][piles[i] - 1];
	piles[j]++;
	piles[i]--;
	if (piles[i] == 0) {
		pn--;
	}
}

int main() {
	char c;
	while (cin >> c) {
		if (c == '#') {
			break;
		}
		
		//put the cards
		pn = 52; //num of piles
		piles[0] = 1;
		card[0][0].rank = c;
		cin >> card[0][0].suit;
		for (int i = 1; i < 52; i++) {
			cin >> card[i][0].rank >> card[i][0].suit;
			piles[i] = 1;
		}
		
		//start moving
		bool possible;
		do {
			possible = false;
			for (int i = 1; i < 52 && !possible; i++) { //check the card can move or not
				if (piles[i] != 0) { // have cards to move
					//check if match or not
					for (int j = i - 1, times = 0; j >= 0 && times < 3 && !possible; j--) {
						if (piles[j] != 0) {
							times++;
							if (times == 3 && match(i, j)) {
								moved(i, j);
								possible = true;
								break;
							}
							if (times == 1 && match(i, j)) {
								for (int k = j - 1; k >= 0 && times < 3 && !possible; k--) {
									if (piles[k] != 0) {
										times++;
										if (times == 3 && match(i, k)) {
											moved(i, k);
											possible = true;
											break;
										}
									}
								}
								if (!possible) {
									moved(i, j);
									possible = true;
									break;
								}
							}
						}
					}
				}
			}
		} while(possible);
		
		//output
		cout << pn << " pile";
		if (pn != 1) {
			cout << 's';
		}
		cout << " remaining:";
		for (int i = 0; i < 52; i++) {
			if (piles[i] != 0) {
				cout << ' ' << piles[i];
			}
		}
		cout << '\n';
	}
	return 0;
}