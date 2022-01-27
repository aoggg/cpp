#include<iostream>
using namespace std;

int arr[100][100];

int main(){
	int n;
	while ( cin >> n ){
		if ( n == 0 ){
			break;
		}
		for ( int i = 0; i < n; i++ ){
			for ( int j = 0; j < n; j++ ){
				cin >> arr[i][j];
			}
		}
		int column = 0, row = 0;
		for ( int i = 0; i < n; i++ ){
			int sum = 0;
			for ( int j = 0; j < n; j++ ){
				sum += arr[i][j];
			}
			if ( sum % 2 != 0 ){
				row++;
			}
		}
		for ( int j = 0; j < n; j++ ){
			int sum = 0;
			for ( int i = 0; i < n; i++ ){
				sum += arr[i][j];
			}
			if ( sum % 2 != 0 ){
				column++;
			}
		}
		if ( column == 0 && row == 0 ){
			cout << "OK\n";
		}
		else if ( column > 1 || row > 1 ){
			cout << "Corrupt\n";
		}
		else {
			int x, y;
			bool possible = false;
			for ( x = 0; x < n; x++ ){
				for ( y = 0; y < n; y++ ){
					arr[x][y] = ( arr[x][y] + 1 ) % 2;
					int nc = 0, nr = 0;
					for ( int i = 0; i < n; i++ ){
						int sum = 0;
						for ( int j = 0; j < n; j++ ){
							sum += arr[i][j];
						}
						if ( sum % 2 != 0 ){
							nr++;
						}
					}
					for ( int j = 0; j < n; j++ ){
						int sum = 0;
						for ( int i = 0; i < n; i++ ){
							sum += arr[i][j];
						}
						if ( sum % 2 != 0 ){
							nc++;
						}
					}
					if ( nr == 0 && nc == 0 ){
						cout << "Change bit (" << x + 1 << ',' << y + 1 << ")\n";
						possible = true;
						break;
					}
					arr[x][y] = ( arr[x][y] + 1 ) % 2;
				}
			}
			if ( !possible ){
				cout << "Corrupt\n";
			}
		}
	}
	return 0;
}
