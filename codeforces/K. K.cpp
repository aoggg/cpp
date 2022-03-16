// Problem: K. K
// Contest: Codeforces - TOI 2022 通靈大賽
// URL: https://codeforces.com/gym/372831/problem/K
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int num[4];

int main(){
	for (int i = 0; i < 4; i++){
		cin >> num[i];
	}
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size(); i++){
		ans += num[s[i] - '1'];
	}
	cout << ans << '\n';
	return 0;
}