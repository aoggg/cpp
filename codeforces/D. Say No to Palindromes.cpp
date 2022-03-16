// Problem: D. Say No to Palindromes
// Contest: Codeforces - Educational Codeforces Round 112 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1555/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

const string STR[6] = {"abc", "acb", "bac", "bca", "cab", "cba"};
int total[6][200001];

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int sl, m; // sl -> s.size ();
	cin >> sl >> m;
	string s;
	cin >> s;
	for (int cases = 0; cases < 6; cases++){
		for (int i = 1; i <= sl; i++){
			total[cases][i] = total[cases][i - 1] + (s[i - 1] != STR[cases][(i + 2) % 3]);
		}
	}
	for (int time = 0; time < m; time++){
		int l, r;
		cin >> l >> r;
		int least = 200000;
		for (int cases = 0; cases < 6; cases++){
			least = min (least, total[cases][r] - total[cases][l - 1]);
		}
		cout << least << '\n';
	}
	return 0;
}