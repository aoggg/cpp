// Problem: L. L
// Contest: Codeforces - TOI 2022 通靈大賽
// URL: https://codeforces.com/gym/372831/problem/L
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		long long a, b, c;
		cin >> a >> b >> c;
		cout << (a + b + c) / 2 << '\n';
	}
	return 0;
}