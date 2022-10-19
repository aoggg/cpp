// Problem: 10854 - Number of Paths
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1795
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int counter() {
	string s;
	int ans = 1;
	while (cin >> s) {
		if (s == "IF")  {
			int routes = counter() + counter();
			ans *= routes;
		}
		else if (s == "ELSE" || s == "END_IF" || s == "ENDPROGRAM") {
			break;
		}
	}
	return ans;
}

int main() {
	int N;
	cin >> N;
	while (N--) {
		cout << counter() << '\n';
	}
	return 0;
}