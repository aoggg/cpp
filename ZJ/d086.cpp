// ZJ d086

#include <iostream>
using namespace std;

int main() {
	char c[205];
	while (scanf("%s", c)) {
		string s = c;
		if (s == "0") {
			break;
		}
		bool Fail = false;
		int score = 0;
		for (int i = 0; i < s.size(); i++) {
			if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z')) {
				Fail = true;
				break;
			} 
			if (s[i] >= 'A' && s[i] <= 'Z') {		
				score += s[i] - 'A' + 1;
			}
			else {
				score += s[i] - 'a' + 1;
			}
		}
		if (Fail) {
			puts("Fail");
		}
		else {
			printf("%d\n", score);
		}
	}
	return 0;
}