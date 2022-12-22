// Problem: G. Special Permutation
// Contest: Codeforces - Codeforces Round #640 (Div. 4)
// URL: https://codeforces.com/contest/1352/problem/G
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<deque>
using namespace std;

deque <int> p;

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		p.clear();
		p.push_back (3);
		p.push_back (1);
		p.push_back (4);
		p.push_back (2);
		int n;
		cin >> n;
		if (n <= 3){
			cout << -1 << '\n';
		}
		else {
			for (int i = 5; i <= n; i++){
				if (i % 2 == 0){
					p.push_front (i);
				}
				else {
					p.push_back (i);
				}
			}
			for (int i = 0; i < n; i++){
				if (i != 0){
					cout << ' ';
				}
				cout << p[i];
			}
			cout << '\n';
		}
	}
	return 0;
}