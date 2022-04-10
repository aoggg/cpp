// Problem: B. Array Cloning Technique
// Contest: Codeforces - Codeforces Round #781 (Div. 2)
// URL: https://codeforces.com/contest/1665/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<map>
using namespace std;

map <int, int> a;

int main(){
	int t;
	cin >> t;
	for (int cases = 0; cases < t; cases++){
		a.clear();
		int n;
		cin >> n;
		int most = 0;
		for (int i = 0; i < n; i++){
			int num;
			cin >> num;
			a[num]++;
			most = max (most, a[num]);
		}
		int moved = 0;
		for (int i = most; most < n; i *= 2){
			moved++;
			if (most + i > n){
				moved += n - most;
				most = n;
			}
			else {
				moved += i;
				most += i;
			}
		}
		cout << moved << '\n';
	}
	return 0;
}