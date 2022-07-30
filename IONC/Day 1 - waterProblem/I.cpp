// Problem: I. Nastya and an Array
// Contest: Codeforces - ionc_day1_waterproblem
// URL: https://codeforces.com/gym/391652/problem/I
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

bool a[200000];

int main() {
	int n;
	int total = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num != 0) {
			num += 100000;
			if (!a[num]) {
				a[num] = true;
				total++;
			}
		}
	}
	cout << total << '\n';
	return 0;
}