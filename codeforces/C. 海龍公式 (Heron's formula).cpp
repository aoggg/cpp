// Problem: C. 海龍公式 (Heron's formula)
// Contest: Codeforces - Ten Point Round #18 (Div. 3) TEST
// URL: https://codeforces.com/group/E1FstFkHSb/contest/376401/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a, b, c, s;
	cin >> a >> b >> c;
	s = (a + b + c) / 2;
	int ans = sqrt (s * (s - a) * (s - b) * (s - c));
	cout << ans << '\n';
	return 0;
}