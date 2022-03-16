// Problem: B. B
// Contest: Codeforces - TOI 2022 通靈大賽
// URL: https://codeforces.com/gym/372831/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int x, y;
		cin >> x >> y; 
		int n = (x + y - abs (x - y));
		cout << max (max (x, y) * max (x, y), (n * n)) << '\n';
	}
	return 0;
}