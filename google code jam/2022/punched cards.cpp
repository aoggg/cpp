// Problem: Punched Cards
// Contest: Google Coding Competitions - Qualification Round 2022 - Code Jam 2022
// URL: https://codingcompetitions.withgoogle.com/codejam/round/0000000000876ff1/0000000000a4621b
// Memory Limit: 1024 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	for (int cases = 1; cases <= T; cases++){
		int R, C;
		cin >> R >> C;
		cout << "Case #" << cases << ":\n";
		for (int i = 0; i < R; i++){
			for (int j = 0; j < C; j++){
				if (i == 0 && j == 0){
					cout << "..";
				}
				else {
					cout << "+-";
				}
			}
			cout << "+\n";
			for (int j = 0; j < C; j++){
				if (i == 0 && j == 0){
					cout << "..";
				}
				else {
					cout << "|.";
				}
			}
			cout << "|\n";
		}
		for (int i = 0; i < C; i++){
			cout << "+-";
		}
		cout << "+\n";
	}
	return 0;
}