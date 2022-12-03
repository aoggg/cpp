#include <iostream>
using namespace std;

const int MAXN = 256 + 5;

char stick[MAXN * 2][MAXN];

int main() {
	int N;
	while (cin >> N) {
		string s;
		getline(cin, s);
		getline(cin, s);
		int place = 0;
		int l = s.size() / N;
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < N; j++) {
				stick[j][i] = s[place];
				place++;
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < l; j++) {
				cout << stick[i][j];
			}
		}
		cout << '\n';
	}
	return 0;
}