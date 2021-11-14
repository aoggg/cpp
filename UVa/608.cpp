#include<iostream>
using namespace std;

int weight[15], total[2];
string coins[3][2], results[3];

int main(){
	int n;
	cin >> n;
	for ( int times = 0; times < n; times++ ){
		for ( int i = 0; i < 3; i++ ){
			for ( int j = 0; j < 2; j++ ){
				cin >> coins[i][j];
			}
			cin >> results[i];
		}
		int ans = 0;
		for ( int i = 0; i < 12; i++ ){
			for ( int sec = -1; sec < 2; sec+=2 ){
				weight[i] = sec;
				for ( int j = 0; j < 3; j++ ){
					total[0] = total[1] = 0;
					for ( int k = 0; k < 2; k++ ){
						for ( int l = 0; l < coins[j][k].size(); l++ ){
							total[k] += weight[coins[j][k][l] - 'A'];
						}
					}
					if ( total[0] == total[1] && results[j] != "even" ){
						weight[i] = 0;
						break;
					}
					else if ( total[0] < total[1] && results[j] != "down" ){
						weight[i] = 0;
						break;
					}
					else if ( total[0] > total[1] && results[j] != "up" ){
						weight[i] = 0;
						break;
					}
				}
				if ( weight[i] != 0 ){
					ans = i;
					break;
				}
			}
			if ( weight[ans] != 0 ){
				break;
			}
		}
		if ( weight[ans] == 1 ){
			cout << (char) (ans + 'A') << " is the counterfeit coin and it is heavy.\n";
		}
		else {
			cout << (char) (ans + 'A') << " is the counterfeit coin and it is light.\n";
		}
		weight[ans] = 0;
	}
	return 0;
}
