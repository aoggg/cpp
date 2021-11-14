#include<iostream>
using namespace std;

int num[10][10];

int main(){
	bool same = false;
	for ( int i = 0; i < 5; i++ ){
		for ( int j = 0; j < 6; j++ ){
			cin >> num[i][j];
		}
	}
	for ( int i = 0; i < 5 && !same; i++ ){
		for ( int j = 0; j < 4; j++ ){
			if ( num[i][j] == num[i][j + 1] && num[i][j] == num[i][j + 2] ){
				same = true;
				break;
			}
		}
	}
	for ( int i = 0; i < 3 && !same; i++ ){
		for ( int j = 0; j < 6; j++ ){
			if ( num[i][j] == num[i + 1][j] && num[i][j] == num[i + 2][j] ){
				same = true;
				break;
			}
		}
	}
	if ( same ){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
	return 0;
}
