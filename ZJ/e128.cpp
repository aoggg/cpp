#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int L;
	while (cin >> L) {
		if (L == 0) {
			break;
		}
		int p = sqrt(L);
		int more = L - p * p;
		int ansx, ansy;
		if (p % 2 == 1) {
			ansx = 1;
			ansy = p;
			if (more > 0) {
				ansy++;
				more--;
				if (ansx + more > ansy) {
					more -= ansy - ansx;
					ansx = ansy;
					ansy -= more;
				}
				else {
					ansx += more;
				}
			}
		}
		else {
			ansx = p;
			ansy = 1;
			if (more > 0) {
				ansx++;
				more--;
				if (ansy + more > ansx) {
					more -= ansx - ansy;
					ansy = ansx;
					ansx -= more;
				}
				else {
					ansy += more;
				}
			}
		}
		cout << ansx << ' ' << ansy << '\n';
	}
	return 0;
}