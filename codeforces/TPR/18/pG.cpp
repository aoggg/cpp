// Problem: G. 對弈吧，這是圍棋的戰爭！(This is a Go War !)【Hard Verison】
// Contest: Codeforces - Ten Point Round #18 (Div. 3) TEST
// URL: https://codeforces.com/group/E1FstFkHSb/contest/376401/problem/G
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main(){
	cout << "Hi, Sigma isn't Omega." << endl;
	string N;
	cin >> N;
	cout << "! " << 1 + ((N[N.size() - 1] - '0') % 2 == 0) << '\n';
	return 0;
}