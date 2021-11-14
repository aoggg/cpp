#include<iostream>
using namespace std;

string row[10], ans[10];

int main(){
	int H;
	cin >> H;
	for ( int i = 0; i < H; i++ ){
		cin >> row[i];
	}
	int nrow = 0;
	for ( int i = 0; i < H; i++ ){
		bool space = false;
		for ( int j = 0; j < 10; j++ ){
			if ( row[i][j] == '.' ){
				space = true;
				break;
			}
		}
		if ( space ){
			ans[nrow] = row[i];
			nrow++;
		}
	}
	cout << "remove " << H - nrow << " rows.\n";
	for ( int i = 0; i < H - nrow; i++ ){
		for ( int j = 0; j < 10; j++ ){
			cout << '.';
		}
		cout << '\n';
	}
	for ( int i = 0; i <= nrow; i++ ){
		cout << ans[i] << '\n';
	}
	return 0;
}
