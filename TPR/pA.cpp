#include<iostream>
#include<vector>
using namespace std;

vector <string> teamA, teamB;

int main(){
	int n, m, t;
	cin >> n >> m >> t;
	for (int i = 0; i < n; i++){
		string player;
		cin >> player;
		teamA.push_back (player);
	}
	for (int i = 0; i < m; i++){
		string player;
		cin >> player;
		teamB.push_back (player);
	}
	for (int time = 0; time < t; time++){
		int q;
		cin >> q;
		if (q % 2 == 0){ //輪到第二隊的人上場
			if (m == 2){
				if ((q / 2) % 2 == 0){
					cout << teamB[1] << '\n';
				}
				else {
					cout << teamB[0] << '\n';
				}
			}
			else {
				cout << teamB[0] << '\n';
			}
		}
		else {
			if (n == 2){
				if ((q / 2) % 2 == 0){
					cout << teamA[0] << '\n';
				}
				else {
					cout << teamA[1] << '\n';
				}
			}
			else {
				cout << teamA[0] << '\n';
			}
		}
	}
	return 0;
}