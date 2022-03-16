// Problem: C - Buy an Integer
// Contest: AtCoder - AtCoder Beginner Contest 146
// URL: https://atcoder.jp/contests/abc146/tasks/abc146_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int d (int n){
	int digits = 0;
	while (n > 0){
		n /= 10;
		digits++;
	}
	return digits;
}

int main(){
	long long A, B, money;
	cin >> A >> B >> money; 
	long long l = 1, r = 1000000000, most = 0;
	while (l <= r){
		long long m = (l + r) / 2;
		long long cost = A * m + B * d (m);
		if (cost == money){
			most = m;
			break;
		}
		else if (cost < money){
			most = m;
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	cout << most << '\n';
	return 0;
}