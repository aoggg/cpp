// Problem: A. Division?
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int cases = 0; cases < t; cases++) {
		int rating;
		cin >> rating;
		if (rating >= 1900) {
			cout << "Division 1\n";
		}
		else if (rating >= 1600 && rating <= 1899) {
			cout << "Division 2\n";
		}
		else if (rating >= 1400 && rating <= 1599) {
			cout << "Division 3\n";
		}
		else {
			cout << "Division 4\n";
		}
	}
	return 0;
}