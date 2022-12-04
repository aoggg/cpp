// Problem: Distinct Numbers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1621/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<set>
using namespace std;

set <int> x;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int num;
		cin >> num;
		x.insert (num);
	}
	cout << x.size () << '\n';
	return 0;
}