// Problem: 3D Printing
// Contest: Google Coding Competitions - Qualification Round 2022 - Code Jam 2022
// URL: https://codingcompetitions.withgoogle.com/codejam/round/0000000000876ff1/0000000000a4672b
// Memory Limit: 1024 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int C[3], M[3], Y[3], K[3];

int main(){
	int T;
	cin >> T;
	for (int cases = 1; cases <= T; cases++){
		cout << "Case #" << cases << ": ";
		int lc = 1e6 + 1, lm = 1e6 + 1, ly = 1e6 + 1, lk = 1e6 + 1;
		for (int i = 0; i < 3; i++){
			cin >> C[i] >> M[i] >> Y[i] >> K[i];
			lc = min (C[i], lc);
			lm = min (M[i], lm);
			ly = min (Y[i], ly);
			lk = min (K[i], lk);
		}
		if (lc + lm + ly + lk < 1e6){
			cout << "IMPOSSIBLE\n";
		}
		else {
			int last = 1e6;
			if (lc >= last){
				cout << last << ' ';
				last = 0;
			}
			else {
				cout << lc << ' ';
				last -= lc;
			}
			if (lm >= last){
				cout << last << ' ';
				last = 0;
			}
			else {
				cout << lm << ' ';
				last -= lm;
			}
			if (ly >= last){
				cout << last << ' ';
				last = 0;
			}
			else {
				cout << ly << ' ';
				last -= ly;
			}
			cout << last << '\n';
		}
	}
	return 0;
}