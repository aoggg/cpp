//TOJ 518

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;

int correct[MAXN], input[MAXN];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> correct[i];
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input[i];
	}
	int con = 0;
	bool success = true;
	int now = 0;
	for (int i = 0; i < m; i++) {
		if (now == n) {
			con++;
			// cout << "1: " << con << '\n';
		}
		else if (input[i] == correct[now]) {
			now++;
			con = 0;
			// cout << "2: " << con << '\n';
		}
		else {
			con++;
			// cout << "3: " << con << '\n';
		}
		if (con > k) {
			// cout << "ouo\n";
			success = false;
			break;
		}
	}
	if (success && now == n) {
		cout << "Triggered!!\n";
	}
	else {
		cout << "Failed..\n";
	}
	return 0;
}