#include<iostream>
using namespace std;

int a[2][100000], row[2][100000];

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int m;
		cin >> m;
		for (int i = 0; i < 2; i++){
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
				if (j == 0){
					row[i][j] = a[i][j];
				}
				else {
					row[i][j] = row[i][j - 1] + a[i][j];
				}
			}
		}
		int possible_score = 0;
		bool first_time = true;
		for (int i = 0; i < m; i++){
			if (first_time){
				possible_score = max (row[0][m - 1] - row[0][i], row[1][i - 1]);
				first_time = false;
			}
			else {
				possible_score = min (possible_score, max (row[0][m - 1] - row[0][i], row[1][i - 1]));
			}
		}
		cout << possible_score << '\n';
	}
	return 0;
}
