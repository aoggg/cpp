// Problem: E. Case of the Zeros and Ones
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int n0 = 0, n1 = 0;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			n0++;
		}
		else {
			n1++;
		}
	}
	cout << (n - min(n0, n1) * 2) << '\n';
	return 0;
}