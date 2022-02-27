#include<iostream>
using namespace std;

bool chess[12][12], column[12];
int ans = 0;

void playing (int N, int num){
	if (num == N){
		ans++;
		cout << '\n';
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if (chess[i][j]){
					cout << 'Q';
				}
				else {
					cout << 'x';
				}
			}
			cout << '\n';
		}
		return;
	}
	for (int i = 0; i < N; i++){
		if (column[i]){
			continue;
		}
		bool possible = true;
		for (int j = 1; j < N && num - j >= 0 && (i + j < N || i - j >= 0); j++){
			if (i + j < N && chess[num - j][i + j]){
				possible = false;
				break;
			}
			if (i - j >= 0 && chess[num - j][i - j]){
				possible = false;
				break;
			}
		}
		if (possible){
			chess[num][i] = true;
			column[i] = true;
			playing (N, num + 1);
			chess[num][i] = false;
			column[i] = false;
		}
	}
} 

int main(){
	int N;
	while (cin >> N){
		if (N == 0){
			break;
		}
		ans = 0;
		playing (N, 0);
		cout << '\n';
		cout << ans << '\n';
	}
	return 0;
}
