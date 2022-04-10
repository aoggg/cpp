// Problem: Double or One Thing
// Contest: Google Coding Competitions - Round 1A 2022 - Code Jam 2022
// URL: https://codingcompetitions.withgoogle.com/codejam/round/0000000000877ba5/0000000000aa8e9c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<string>
using namespace std;

int main(){
	int T;
	cin >> T;
	for (int cases = 1; cases <= T; cases++){
		cout << "Case #" << cases << ": ";
		string S;
		cin >> S;
		string ans = S, cmp = "";
		for (int i = 0; i < ans.size(); i++){
			cmp = ans.substr (0, i) + ans[i] + ans.substr (i);
			if (cmp < ans){
				i++;
				ans = cmp;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}