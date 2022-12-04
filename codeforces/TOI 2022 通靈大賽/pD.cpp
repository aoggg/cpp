// Problem: D. D
// Contest: Codeforces - TOI 2022 通靈大賽
// URL: https://codeforces.com/gym/372831/problem/D
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
		string s;
		cin >> s;
		if (s.size() > 10) {
			long long l = s.size();
			cout << s[0] << l - 2 << s[l - 1] << '\n';
		}
		else {
			cout << s << '\n';
		}
	}
	return 0;
}