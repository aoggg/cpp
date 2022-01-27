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
		int column = 0, row = 0, x, y;
		for ( int i = 0; i < n; i++ ){
			int rsum = 0, csum = 0;
			for ( int j = 0; j < n; j++ ){
				rsum += arr[i][j], csum += arr[j][i];
			}
			if ( rsum % 2 != 0 ){
				row++;
				x = i;
			}
			if ( csum % 2 != 0 ){
				column++;
				y = i;
			}
		}
		if ( row == 0 && column == 0 ){
			cout << "OK\n";	
		} 
		else if ( row == 1 && column == 1 ){
			cout << "Change bit (" << x + 1 << ',' << y + 1 << ")\n";
		}
		else {
			cout << "Corrupt\n";
		}
	}
	return 0;
}
