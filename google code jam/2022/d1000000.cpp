// Problem: d1000000
// Contest: Google Coding Competitions - Qualification Round 2022 - Code Jam 2022
// URL: https://codingcompetitions.withgoogle.com/codejam/round/0000000000876ff1/0000000000a46471
// Memory Limit: 1024 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm>
using namespace std;

int S[100000];

int main(){
	int T;
	cin >> T;
	for (int cases = 1; cases <= T; cases++){
		cout << "Case #" << cases << ": ";
		int N;
		cin >> N;
		for (int i = 0; i < N; i++){
			cin >> S[i];
		}
		sort (S, S + N);
		int possible = 0;
		for (int i = 1, place = 0; place < N; place++){
			if (S[place] < i){
				continue;
			}	
			else {
				i++;
				possible++;
			}
		}
		cout << possible << '\n';
	}
	return 0;
}