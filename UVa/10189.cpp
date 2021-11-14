#include<iostream>
using namespace std;

char field[105][105];
int mines[105][105] = {0};

int main(){
	int n, m;
	for ( int time = 1; cin >> n >> m; time++ ){
		if ( n == 0 && m == 0 ){
			break;
		}
		for ( int i = 0; i < n; i++ ){
			for ( int j = 0; j < m; j++ ){
				cin >> field[i][j];
			}
		}
		if ( time != 1 ){
			cout << '\n';
		}
		cout << "Field #" << time << ":\n";
		for ( int i = 0; i < n; i++ ){
			for ( int j = 0; j < m; j++ ){
				if ( field[i][j] == '*' ){
					mines[i][j] = -1;
				}
				else {
					if ( i != 0 && j != 0 && field[i - 1][j - 1] == '*' ){
						mines[i][j]++;
					}
					if ( i != 0 && j != m - 1 && field[i - 1][j + 1] == '*' ){
						mines[i][j]++;
					}
					if ( i != n - 1 && j != 0 && field[i + 1][j - 1] == '*' ){
						mines[i][j]++;
					}
					if ( i != n - 1 && j != m - 1 && field[i + 1][j + 1] == '*' ){
						mines[i][j]++;
					}
					if ( i != 0 && field[i - 1][j] == '*' ){
						mines[i][j]++;
					}
					if ( j != 0 && field[i][j - 1] == '*' ){
						mines[i][j]++;
					}
					if ( i != n - 1 && field[i + 1][j] == '*' ){
						mines[i][j]++;
					}
					if ( j != m - 1 && field[i][j + 1] == '*' ){
						mines[i][j]++;
					}
				}
			}
		}
		for ( int i = 0; i < n; i++ ){
			for ( int j = 0; j < m; j++ ){
				if ( mines[i][j] == -1 ){
					cout << '*';
					mines[i][j] = 0;
				}
				else {
					cout << mines[i][j];
					mines[i][j] = 0;
				}
			}
			cout << '\n';
		}
	}
	return 0;
}
