// Problem: D. Borze
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '.') {
			cout << 0;
		}
		else {
			i++;
			if (s[i] == '.') {
				cout << 1;	
			}
			else {
				cout << 2;
			}
		}
	}
	cout << '\n';
	return 0;
}