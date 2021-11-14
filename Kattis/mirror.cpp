#include<iostream>
using namespace std;

string tests[25];

int main(){
	int T;
	cin >> T;
	for ( int times = 1; times <= T; times++ ){
		int R, C;
		cin >> R >> C;
		for ( int i = 0; i < R; i++ ){
			cin >> tests[i];
		}
		cout << "Test " << times << '\n';
		for ( int i = R - 1; i >= 0; i-- ){
			for ( int j = C - 1; j >= 0; j-- ){
				cout << tests[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
}
